#include<iostream>.
#include<vector>
#include<map>
#define ll long long

using namespace std;

int solve(){
    ll int n, sum = 0;
    cin >> n;
    ll int a[n];
    vector <ll int> v;
    map <ll int, ll int> mp;
    for(ll int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }

    for(ll int i = 0; i < n; i++){
        mp[a[i]]--;
        ll int remSum = sum - a[i];
        if(remSum % 2 == 0){
            if(mp.find(remSum/2) != mp.end() && mp[remSum/2] > 0){
                v.push_back(i+1);
            }
        }
        mp[a[i]]++;
    }

    cout<<v.size()<<endl;
	for(auto &it:v)
		cout<<it<<" ";
	return 0;



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
