//Niketan
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, total, ans;
    cin >> n;
    ans = 0;
    while(n--){
        temp = 0;
        total = 0;
        for(int i = 0; i < 3; i++){
            cin >> temp;
            total += temp;
        }
        if (total > 1) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

