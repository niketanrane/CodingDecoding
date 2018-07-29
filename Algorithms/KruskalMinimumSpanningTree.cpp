#include<iostream>
#include<set>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#define ll long long
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
pair<long long, pair <long long int, long long int> > v[100009];
int n, e;
int subset[100009];

int root(int cur)
{
    int parent = subset[cur];
    while(parent != cur){
        cur = parent;
        parent = subset[cur];
    }
    return parent;
}

int funcUnion(ll int x, ll int y)
{
    int rootx = root(x);
    int rooty = root(y);
    subset[rootx] = rooty;
    return 0;
}

int kruskal()
{
    int eAdded = 0, totalWeight = 0;
    pair<long long int, pair <long long int, long long int> > cur;

    for(int i = 0; i <= n; i++){
        subset[i] = i;
    }

    for(int i = 1; i <= e; i++){
        cur = v[i];
        int x = cur.second.first;
        int y = cur.second.second;
        int w = cur.first;
        //cout << "edge i = " << i << " w " << w << " x " << x << " y " << y << endl;
        int rootx = root(x);
        int rooty = root(y);
        //cout << "rootx = " << rootx << " rooty = " << rooty << endl;
        if(rootx != rooty){
            eAdded++;
            totalWeight += w;
            funcUnion(x, y);
            //cout << "rootx = " << subset[x] << " rooty = " << subset[y] << endl;
        }
    }
    return totalWeight;
}

int main()
{
    int x, y, i, w;
    scanf("%d %d", &n, &e);
    for(i = 1; i <= e; i++){
        scanf("%d %d %d", &x, &y, &w);
        v[i] = make_pair(w, make_pair(x, y));
    }
    sort(v+1, v+e+1);
    cout << kruskal() << endl;
    //
    for(int i = 1; i <= n; i++){
        cout << "subset[i] " << i << "  " << subset[i] << endl;
    }
    //
    return 0;
}




