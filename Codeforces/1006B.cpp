#include<bits/stdc++.h>
//niketan
using namespace std;

int a[2010];

int main()
{
    vector< pair <int,int> > v;
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        v.push_back(make_pair(a[i], i));
    }
    sort(v.begin(), v.end());
    int j = 0;
    int ans[k+5] = {0};
    long long int total = 0;
    for (int i=n-1; i >= n - k; i--)
    {
        ans[j] = v[i].second;
        //printf("%d", ans[j]);
        j++;
        total += v[i].first;
    }
    sort(ans, ans + k);
    int temp = -1;
    printf("%lld\n", total);
    for (int i=0; i < k - 1; i++)
    {
        printf("%d ", ans[i] - temp);
        temp = ans[i];
    }

    if(k == 1){
        printf("%d ", n);
    }
    else{
        printf("%d ", n - 1 - ans[k-2]);
    }


    return 0;

}

