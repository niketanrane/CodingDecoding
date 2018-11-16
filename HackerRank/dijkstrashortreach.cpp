#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>

#define ll long long

using namespace std;

int dijkstra(){
    priority_queue< pair<ll int, ll int>, vector< pair<ll int, ll int> > , greater< pair<ll int, ll int> > >pq;
    ll int v, e, x, y, z;
    cin >> v >> e;
    vector< pair<ll int, ll int> > vec[v+1];

    for(ll int i = 0; i < e; i++){
        cin >> x >> y >> z;
        vec[x].push_back( make_pair(y, z) );
        vec[y].push_back( make_pair(x, z) );
    }

    ll int MAX = 1e18, cur, dst;
    pair <ll int, ll int> pr;
    vector< ll int > dist(v+1, MAX);
    vector< bool > vis(v+1, false);
    ll int start;
    cin >> start;
    dist[start] = 0;
    pq.push(make_pair(0, start));
    while(!pq.empty()){
        pr = pq.top();
        cur = pr.second;
        pq.pop();
        if(vis[cur]){
            continue;
        }
        vis[cur] = true;
        for(ll int i = 0; i < vec[cur].size(); i++){
            ll int p_dist = dist[cur] + vec[cur][i].second;
            if (!vis[vec[cur][i].first] && p_dist < dist[vec[cur][i].first]){
                dist[vec[cur][i].first] = p_dist;
                pq.push(make_pair(p_dist, vec[cur][i].first));
            }
        }
    }

    for(ll int i = 1; i < dist.size() ; i++){
        if(i == start){
            continue;
        }
        else if( dist[i] == MAX){
            dist[i] = -1;
        }
        cout << dist[i] << " " ;
    }
    cout << endl;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--){
        dijkstra();
    }
    return 0;
}

