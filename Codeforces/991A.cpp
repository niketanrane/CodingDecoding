#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int ans = n - (a+b-c);
    if(c > a || c > b){
        cout << "-1"<<endl;
        return 0;
    }
    if(ans > 0){
        cout << ans << endl;
    }
    else {
        cout << "-1" << endl;
    }
    return 0;
}
