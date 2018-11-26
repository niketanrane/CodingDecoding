#include<iostream>

using namespace std;

int board[12][12];
int N;

bool isLegalMove(int row, int col){
    //printf("Check legal move %d %d\n", row, col);
    if(row < 1 || row > N || col < 1 || col > N || board[row][col] == 1){
        return false;
    }

    for(int i = 1; i <= N; i++){
        if(board[i][col] == 1){
            return false;
        }
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(((i+j) == (row+col))|| ((i-j) == (row-col))){
                if(board[i][j] == 1)
                    return false;
            }
        }
    }

    return true;
}

bool NQueens(int curRow, int curCol, int PlacedQueens){

    //printf("r = %d c = %d Q = %d\n", curRow, curCol, PlacedQueens);

    if(PlacedQueens == N){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                printf("%d ",board[i][j]);
            }
            printf("\n");
        }
        return true;
    }

    for(int i = 1; i <= N; i++){
        if(isLegalMove(curRow + 1, i)){
            board[curRow+1][i] = 1;
            //printf("Calling legal move now %d %d\n", curRow+1, i);
            if(NQueens(curRow+1, i, PlacedQueens+1) == true){
                return true;
            }
            else{
                board[curRow+1][i] = 0;
            }
        }
    }
    return false;
}

int main(){

    N = 4;
    cin >> N;
    //board[1][1] = 1;
    if(NQueens(0, 0, 0) == false){
        cout << "Not possible" << endl;
    };

    return 0;
}
