#include<iostream>
#include<set>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#define ll long long
#define PII pair<long long int, long long int>

//niketanrane
/*
4 5
1 2 7
1 4 6
4 2 9
4 3 8
2 3 6
*/
using namespace std;

bool vis[100009];
priority_queue< PII, vector<PII>, greater<PII> >pq;
vector< PII > v[100009];



int prim(ll int s)
{
    ll int totalWeight = 0;
    pq.push(make_pair(0, s));

    while(!pq.empty()){
        //select the minimum dist node
        PII cur = pq.top();
        pq.pop();
        ll int x = cur.second;
        //cout << "Node travelled" << x << endl; //current node
        if(vis[x] == false){
            totalWeight += cur.first;
            vis[x] = true;
            for(ll int i = 0; i < v[x].size(); i++){
                //cout << "adj node " << v[x][i].first << " " << v[x][i].second << endl;
                if(vis[v[x][i].second] == false){
                    pq.push(v[x][i]);
                }
            }
        }
    }
    return totalWeight;
}

int main()
{
    ll int x, y, i, w, n, e;
    scanf("%lld %lld", &n, &e);
    for(i = 1; i <= e; i++){
        scanf("%lld %lld %lld", &x, &y, &w);
        v[x].push_back(make_pair(w, y));
        v[y].push_back(make_pair(w, x));
    }

    cout << prim(1) << endl;
    return 0;
}




