#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int bfs(int s, int l, vector< vector<int> > v){
    queue<int>q;
    //int l = v.size();
    bool vis[l+1];
    int level[l+1];
    for(int i = 1; i <= l; i++){
        vis[i] = false;
        level[i] = -1;
    }
    level[s] = 0;
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(int i = 0; i < v[cur].size(); i++){
            if(!vis[v[cur][i]]){
                vis[v[cur][i]] = true;
                q.push(v[cur][i]);
                level[v[cur][i]] = level[cur] + 1;
            }
        }
    }

    for(int i = 1; i <= l; i++){
        if(i == s)continue;
        cout << max(-1,6*level[i]) << " ";
    }
    cout << endl;

    return 0;
}

int solve(){
    int n, m, i, x, y, s;
    cin >> n >> m;
    //cout << n << m << "sdhs" << endl;
    vector< vector<int> > v(n+1);
    for(i = 1; i <= m; i++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin >> s;
    //cout << s << endl;
    bfs(s, n, v);
    return 0;

}
int main()
{
    int q;
    cin >> q;
    while(q--){
        solve();
    }

    return 0;
}
