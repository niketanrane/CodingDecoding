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
vector<int> v[1000];

int dfs(int s){
    stack<int>st;
    st.push(s);
    vis[s] = true;
    while(!st.empty()){
        int cur = st.top();
        st.pop();
        cout << " Current Node is" << cur << endl;
        for(int i = 0; i < v[cur].size(); i++){
            int ch = v[cur][i];
            if(vis[ch] == false){
                vis[ch] = true;
                st.push(ch);
            }
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
    dfs(0);
    return 0;
}




