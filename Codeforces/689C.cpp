#include<iostream>
#define ll long long
using namespace std;

ll int ways(ll int n)
{
    ll int i = 0, ans = 0;
    //printf("%lld", ans);
    for(i = 2; i*i*i <= n; i++){
        ans += n/(i*i*i);
        //printf("%lld %lld\n", i, ans);
    }
    return ans;
}
int main()
{
    ll int m, mid;
    scanf("%lld", &m);
    ll int l = 0, r = 10000000000000000;
    while(l < r){
        mid = l + (r-l)/2;
        //printf("%lld %lld %lld\n", l, r, mid);
        if(ways(mid) >= m){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }

    if(ways(r) == m){
        printf("%lld\n", r);
    }
    else{
        printf("-1\n");
    }
    return 0;
}
