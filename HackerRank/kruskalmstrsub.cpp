#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define ll long long
#define MAX 450
using namespace std;

ll int findParent(ll int x, ll int parent[], ll int rnk[]){
    if(parent[x] == x){
        return x;
    }
    else{
        parent[x] = findParent(parent[x], parent, rnk);
        return parent[x];
    }
}

ll int mergeSet(ll int x, ll int y, ll int parent[], ll int rnk[]){
    ll int px = findParent(x, parent, rnk);
    ll int py = findParent(y, parent, rnk);
    if(px == py){
        parent[px] = py;
        rnk[py]++;
    }
    else if(rnk[px] < rnk[py]){
        parent[px] = py;
    }
    else{
        parent[py] = px;
    }
    return 0;
}

int main()
{
    ll int n, m, x, y, w, px, py, costMST = 0;
    cin >> n >> m;
    vector< pair< ll int, pair<ll int, ll int> > >vec;
    vector< pair< ll int, pair<ll int, ll int> > >::iterator it;

    ll int parent[n+1];
    ll int rnk[n+1];
    for(ll int i = 0; i <= n; i++){
        parent[i] = i;
        rnk[i] = 1;
    }

    for(ll int i = 0; i < m; i++){
        cin >> x >> y >> w;
        vec.push_back(make_pair(w, make_pair(x, y)));
    }

    sort(vec.begin(), vec.end());

    for(it = vec.begin(); it != vec.end(); ++it){
        x = it->second.first;
        y = it->second.second;
        px = findParent(x, parent, rnk);
        py = findParent(y, parent, rnk);
        if(px == py){
            //printf("%lld and %lld forming cycle. Skipping\n", x, y);
            continue;
        }

        //printf("Adding edge from %lld to %lld\n", x, y);
        costMST += it->first;
        mergeSet(x, y, parent, rnk);
    }
    cout << costMST << endl;

    return 0;
}

/*
Test case
4 9
1 2 2
1 4 9
2 3 4
2 4 4
2 1 3
3 4 2
3 2 6
4 1 14
4 3 4

4 6
1 2 2
1 3 6
2 3 3
3 2 5
1 4 20
3 4 7
*/

