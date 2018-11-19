#include<iostream>
#define ll long long

using namespace std;

int solve(){
    ll int n, cnt = 0;
    cin >> n;
    ll int a[n];
    for(ll int i = 0; i < n; i++){
        cin >> a[i];
        if(i >= 2 && a[i] == 1 && a[i-1] == 0 && a[i-2] == 1){
            cnt++;
            a[i] = 0;
        }
    }
    cout << cnt << endl;

    return 0;
}
int main() {

    ll int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
