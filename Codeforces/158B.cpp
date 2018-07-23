#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        mp[temp]++;
    }
    int ans = 0;
    ans += mp[4];
    int mini = min(mp[3], mp[1]);
    ans += mini;
    mp[3] -= mini;
    mp[1] -= mini;
    ans += mp[3];
    ans += ceil(float(2*mp[2]+mp[1])/4);
    cout << ans << endl;
    return 0;
}
