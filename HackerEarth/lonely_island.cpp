#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<cmath>

using namespace std;

int in[200005];
double out[200005];
vector<int> vec[200005];
double val[200005];

int topological_sort(){
    int n, m, r, x, y;
    cin >> n >> m >> r;

    for(int i = 1; i <= m; i++){
        cin >> x >> y;
        vec[x].push_back(y);
        in[y]++;
        out[x] += 1;
    }

    queue<int> q;
    for(int i = 1; i <= n; i++){
        if(in[i] == 0){
            q.push(i);
        }
    }
    val[r] = 1.0;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        //cout << cur << " ";
        for(int i = 0; i < vec[cur].size(); i++){
            int adjVert = vec[cur][i];
            in[adjVert]--;
            val[adjVert] += val[cur]*1.0/out[cur];
            //cout << val[cur] << " " << out[cur] << " " << val[cur]*1.0/out[cur] << endl;
            if(in[adjVert] == 0){
                q.push(adjVert);
            }
        }
    }
    double mx = 0.00;
    for(int i = 1; i <= n; i++){
        if(!out[i]){
            mx = max(mx, val[i]);
        }
    }

    for(int i = 1; i <=n; i++){
        if(!out[i] && fabs(val[i] - mx) <= 1e-9){
            cout << i << " " ;
        }
    }
    return 0;
}

int main(){

    topological_sort();

    return 0;

}
