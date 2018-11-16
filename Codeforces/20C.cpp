#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>

#define ll long long

using namespace std;

int dijkstra(){
    priority_queue< pair<ll int, ll int>, vector< pair<ll int, ll int> > , greater< pair<ll int, ll int> > >pq;
    ll int v, e, x, y, z, edgeCost, adjVert;
    cin >> v >> e;
    vector< pair<ll int, ll int> > vec[v+1];

    for(ll int i = 0; i < e; i++){
        cin >> x >> y >> z;
        vec[x].push_back( make_pair(y, z) );
        vec[y].push_back( make_pair(x, z) );
    }

    ll int MAX = 1e18, curVert;
    pair <ll int, ll int> pr;
    vector< ll int > dist(v+1, MAX);
    vector< bool > vis(v+1, false);
    vector< ll int > parent(v+1, -1);
    ll int start = 1;
    //cin >> start;
    dist[start] = 0;
    pq.push(make_pair(0, start));
    while(!pq.empty()){
        pr = pq.top();
        curVert = pr.second;
        pq.pop();
        if(vis[curVert]){
            continue;
        }
        vis[curVert] = true;
        for(ll int i = 0; i < vec[curVert].size(); i++){
            adjVert = vec[curVert][i].first;
            edgeCost = vec[curVert][i].second;
            ll int p_dist = dist[curVert] + edgeCost;
            if (!vis[adjVert] && (p_dist < dist[adjVert])){
                dist[adjVert] = p_dist;
                parent[adjVert] = curVert;
                pq.push(make_pair(p_dist, adjVert));
            }
        }
    }

    if(dist[v] == MAX){
        cout << "-1\n";
        return 0;
    }

    ll int temp = v;
    stack < ll int> st;

    while(temp != -1){
        st.push(temp);
        temp = parent[temp];
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    int n = 1;
    while(n--){
        dijkstra();
    }
    return 0;
}

