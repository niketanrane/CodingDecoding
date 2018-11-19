#include<iostream>
#define ll long long

using namespace std;

int solve(){
    ll int a, b, k;
    cin >> a >> b >> k;
    cout << (k/2 + k%2)*a - (k/2)*b << endl;
    return 0;
}
int main() {

    ll int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
