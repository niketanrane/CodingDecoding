#include<iostream>
#include<vector>
#define ll long long
using namespace std;

#define MAX 200009
ll int a[MAX], n, k;
ll int vec[MAX];
vector<int> v;

int can(int cur){
    ll int pos = 0;
    for(ll int i = 1; i <= 200000; i++){
        pos += (vec[i]/cur);
    }
    return (pos >= k);
}

int main()
{
    cin >> n >> k;
    for(ll int i = 1; i <= n; i++){
        cin >> a[i];
        vec[a[i]]++;
    }

    ll int l = 1, r = n;
    while(l < r){
        ll int mid = l + r + 1;
        mid /= 2;
        if(can(mid)){
            l = mid;
        }
        else{
            r = mid - 1;
        }
    }

    ll int take=k;

	for(ll int i=1;i<=2e5;i++)
	{
		ll int cur=min(take, vec[i]/l);
		take-=cur;
		for(ll int j=1;j<=cur;j++)
			v.push_back(i);
	}

	for(auto &it:v)
		cout<<it<<" ";

    return 0;
}
