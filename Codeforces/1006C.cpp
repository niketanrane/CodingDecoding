#include<bits/stdc++.h>
//niketan
using namespace std;
long long int a[200500];
int main()
{
    long long int n;
    long long int leftSum = 0, ans = 0;
    map<long long int, long long int> mp;
    scanf("%lld", &n);

    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        //printf("%d", a[i]);
        leftSum += a[i];
        //printf("i = %d leftSum = %d\n",i, leftSum);
        mp[leftSum] = i+1;
    }
    //printf("\n");
    long long int rightSum = 0;
    for(int i = n-1; i >= 0; i--){
        rightSum += a[i];
        if(mp[rightSum] && i > mp[rightSum]-1){
            //printf("%d %d\n", rightSum, mp[rightSum]);
            ans = rightSum;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
