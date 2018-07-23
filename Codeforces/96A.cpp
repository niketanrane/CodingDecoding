#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string ans = "NO";
    char a[105];
    cin >> a;
    int n = strlen(a);
    int cnt = 1;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            cnt++;
        }
        else{
            cnt = 1;
        }
        if(cnt >= 7){
            ans = "YES";
        }
    }
    cout << ans << endl;
    return 0;
}
