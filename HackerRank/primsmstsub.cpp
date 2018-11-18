#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define ll long long

using namespace std;

int main()
{
    ll int n, m, x , y, w, i;
    cin >> n >> m;
    vector< pair<ll int, ll int> > vec[n+1];
    vector< ll int> dist(n+1, LONG_MAX);
    bool vis[n+1];
    int prev[n+1];
    for(i = 1; i <= m; i++){
        cin >> x >> y >> w;
        vec[x].push_back(make_pair(y, w));
        vec[y].push_back(make_pair(x, w));
    }

    priority_queue< pair<ll int, ll int>, vector< pair<ll int, ll int> >, greater<pair<ll int , ll int> > > pq;
    ll int start = 1, cost = 0;
    cin >> start;
    dist[start] = 0;
    for(i = 1; i <= n; i++){
        vis[i] = 0;
        prev[i] = -1;
    }
    pq.push(make_pair(0, start));
    while(!pq.empty()){
        ll int curVert = pq.top().second;
        ll int curDist = pq.top().first;

        pq.pop();
        if(vis[curVert]){
            continue;
        }
        vis[curVert] = true;
        cost += curDist;
        //cout << "Edge added is " << prev[curVert] << "->" << curVert << endl;
        for(i = 0; i < vec[curVert].size(); i++){
            ll int adjVert = vec[curVert][i].first;
            ll int edgeDist = vec[curVert][i].second;
            //cout << curVert << " " << i << " " << adjVert << " " << dist[adjVert] << endl;
            if(!vis[adjVert] && (dist[adjVert] > edgeDist)){
                dist[adjVert] = edgeDist;
                //cout << "Pushed " << adjVert  << " " << dist[curVert] << " " << edgeDist << endl;
                pq.push(make_pair(dist[adjVert], adjVert));
                prev[adjVert] = curVert;
            }
        }
    }
    cout << cost << endl;



    return 0;
}
