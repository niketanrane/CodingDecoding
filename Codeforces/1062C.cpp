#include<iostream>
#include<string>
#include<cmath>
#define ll long long

using namespace std;
ll int a[1000009];
char s[1000009];
const ll mod = 1000000007;

ll ppow(ll a,ll n) {
	ll ret=1,now=a;
	while (n) {
		if (n&1) {
			ret = (ret*now)%mod;
		}
		now = (now*now)%mod;
		n >>=1;
	}
	return ret;
}

ll int solve(ll int l, ll int r){
    ll int ones = a[r] - a[l-1];
    ll int zeros = r - l + 1 - ones;
    ll int x = ppow(2, ones) - 1;
    ll int y = ppow(2, zeros);
    ll int ans = ( (x % mod) * (y % mod) ) % mod;
    cout << ans << endl;
    return 0;

}
int main()
{
    ll int n, q, i = 0, temp = 0, l = 0, r= 0;
    cin >> n;
    cin >> q;
    cin >> s;
    ll int cnt = 0;
    for(i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt++;
        }
        a[i+1] = cnt;
        //printf("%lld ", a[i]);
    }
    for(i = 0; i < q; i++){
        cin >> l >> r;
        solve(l, r);
    }

    return 0;
}
