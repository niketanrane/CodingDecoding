→ Source Copy
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n = 0, len = 0;
    string str = "", ans = "";
    scanf("%d", &n);
    while(n--){
        cin >> str;
        len = str.length();
        if(len <= 10){
            cout << str << "\n";
            continue;
        }
        else{
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }
    }
    return 0;
}
