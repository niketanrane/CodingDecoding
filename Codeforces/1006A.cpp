#include<bits/stdc++.h>
//niketan
using namespace std;

int main()
{
    long long int n, a;
    scanf("%lld", &n);
    while(n--){
        scanf("%lld", &a);
        if(a%2 == 0){
            printf("%lld ", a-1);
        }
        else{
            printf("%lld ", a);
        }
    }
    return 0;
}
