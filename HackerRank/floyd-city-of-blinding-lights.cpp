#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#define ll long long
#define MAX 450
using namespace std;

ll int dist[MAX][MAX];
ll int pred[MAX][MAX];
ll int duppred[MAX][MAX];

int display(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << pred[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    ll int n, m, x , y, w,i;
    ll int INTMAX = 1e18;
    cin >> n >> m;
    vector< pair<ll int, ll int> > vec[n+1];

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dist[i][j] = INTMAX;
            if(i == j)dist[i][j] = 0;
        }
    }
    for(i = 1; i <= m; i++){
        cin >> x >> y >> w;
        //vec[x].push_back(make_pair(y, w));
        dist[x][y] = w;
        pred[x][y] = x;
        duppred[x][y] = x;
        //vec[y].push_back(make_pair(x, w));
    }
    //display(n);
    //cout << endl;

    for(int k = 1; k <= n; k++){
        //checking for better answer using i th vertex
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dist[i][j] > dist[i][k] + dist[k][j]){
                    //cout << "Found shorter " << i << " " << j << " " << k << " " << dist[i][k] << "+" << dist[k][j] << "< " << dist[i][j] << "path " << pred[k][j] << " or " << k << endl;
                    dist[i][j] = dist[i][k] + dist[k][j];
                    //cout << " updating " << i << " " << j  << " "  << k << " " << dist[i][k] + dist[k][j] << endl;
                    pred[i][j] = pred[k][j];
                    duppred[i][j] = k;
                }
            }

        }
        //display(n);
        //cout << endl;
    }
/*


    cout << "Done\n";

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << duppred[i][j] << " ";
        }
        cout << endl;
    }
*/

    int q, l, r;
    cin >> q;
    while(q--){
        cin >> l >> r;
        if(dist[l][r] != INTMAX){
            cout << dist[l][r] << endl;
        }
        else{
            cout << "-1\n";
        }
    }


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

