#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans = 0, a, b, cur = 0;
    cin >> n;
    while(n--){
        cin >> a >> b;
        cur = cur + (b - a);
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}


