#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char str[55];
    cin >> n;
    int s = 0;
    int e = 1;
    int i = 0;
    int ans = 0;
    cin >> str[i++];
    while(e < n){
        cin >> str[i++];
        if(str[s] == str[e]){
           ans++;
           e++;
        }
        else{
            s = e;
            e++;
        }
    }
    cout << ans << endl;
    return 0;

}
