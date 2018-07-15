#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int n = 0, m = 0, a = 0;
    scanf("%lld %lld %lld", &n, &m, &a);
    //printf("%lld %lld %lld\n", n, m, a);
    long long int ans = ceil(n*1.00/a)*ceil(m*1.00/a);
    printf("%lld", ans);
    return 0;
}
