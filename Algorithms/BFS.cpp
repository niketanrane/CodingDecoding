#include<iostream>
#include<set>
#include<vector>
#include<queue>
#include<stack>

//niketanrane
/*
3 3
0 1
1 2
0 2
*/
using namespace std;

bool vis[1000];
vector< int > v[1000];

int bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << "visited node : " << cur << endl;
        for(int i = 0; i < v[cur].size(); i++){
            if(!vis[v[cur][i]]){
                q.push(v[cur][i]);
                vis[v[cur][i]] = true;
            }
                //cout << v[cur][i] << endl;
        }
    }
    return 0;
}
int main()
{
    int n, e, x, y, i;
    scanf("%d %d", &n, &e);
    for(i =0; i < e; i++){
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //Assuming all nodes are connected
    bfs(0);
    return 0;
}
