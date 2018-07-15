#include<bits/stdc++.h>

int main()
{
    int k = 1, n = 0;
    int ans = 0;
    int i = 0;
    int a[106] = {0};
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    while(a[ans] >= a[k-1] & a[ans] > 0){
        ans++;
    }
    printf("%d", ans);
    return 0;
}
