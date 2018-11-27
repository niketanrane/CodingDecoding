#include<iostream>
#include<vector>
#include<set>
using namespace std;
#define N 4

vector< pair<int, int> >path;

int maze[4][4]  =  { {1, 0, 0, 0},
                     {1, 1, 1, 1},
                     {0, 1, 0, 1},
                     {1, 1, 1, 1}
};

bool isLegalMove(int x, int y){
    if(x < 0 || y < 0 || x >= N || y >= N || maze[x][y] == 0){
        return false;
    }
    return true;
}

bool ratMaze(int x, int y){
    //cout << x << " " << y << endl;
    if(x == N-1 && y == N-1){
        cout << "path found = ->\n";
        for(int i = 0; i < path.size(); i++){
            cout << path[i].first << " " << path[i].second << endl;
        }
        return true;
    }


    if(isLegalMove(x, y+1)){
        path.push_back( make_pair(x, y+1) );
        ratMaze(x, y+1);
        path.pop_back();
    }

    if(isLegalMove(x+1, y)){
        path.push_back( make_pair(x+1, y) );
        ratMaze(x+1, y);
        path.pop_back();
    }

    return false;
}

int main(){

    path.push_back( make_pair(0, 0) );
    ratMaze(0, 0);

    return 0;
}
