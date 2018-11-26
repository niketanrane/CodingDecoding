#include<iostream>
#include <vector>

using namespace std;
bool visitedPos[65][65];
vector < pair <int, int> > possibleMove;
vector < pair<int, int> > path;
int totalCalls = 0;
int N = 5;

bool isMoveLegal(int curPositionX, int curPositionY){
    if (curPositionX < 1 || curPositionX > N || curPositionY < 1 || curPositionY > N || visitedPos[curPositionX][curPositionY]){
        return false;
    }
    return true;
}

bool KnightTour(int curPositionX, int curPositionY, int totalVisited){

    totalCalls++;
    //cout << " in KinghtTour " << curPositionX << " " << curPositionY << " " << totalVisited << endl;

    if(totalVisited >= N*N){
        cout << " Total Path Covered" << endl;
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                printf("%d ", visitedPos[i][j]);
            }
            printf("\n");
        }
        return true;
    }


    for(int i = 0; i < 8; i++){
        int possiblePosX = curPositionX + possibleMove[i].first;
        int possiblePosY = curPositionY + possibleMove[i].second;
        //printf("i = %d x = %d y = %d\n", i, possibleMove[i].first, possibleMove[i].second);
        if(isMoveLegal(possiblePosX, possiblePosY)){
            visitedPos[possiblePosX][possiblePosY] = true;
            if(KnightTour(possiblePosX, possiblePosY, totalVisited+1)){
                return false;
            }
            else{
                visitedPos[possiblePosX][possiblePosY] = false;
            }
        }

    }

    //visitedPos[curPositionX][curPositionY] = false;
    return false;

}
int main()
{
    int knightPositionX = 1, knightPositionY = 1;

    int totalVisited = 0;

    possibleMove.push_back( make_pair(-2, -1) );
    possibleMove.push_back( make_pair(-2, +1) );
    possibleMove.push_back( make_pair(-1, -2) );
    possibleMove.push_back( make_pair(-1, +2) );
    possibleMove.push_back( make_pair(+1, -2) );
    possibleMove.push_back( make_pair(+1, +2) );
    possibleMove.push_back( make_pair(+2, -1) );
    possibleMove.push_back( make_pair(+2, +1) );

    cout << " Starting Now" << endl;
    visitedPos[1][1] = true;
    KnightTour(1, 1, 1);
    cout << "end calls = " << totalCalls << endl;
    return 0;

}
