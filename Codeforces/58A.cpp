#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> s;
    string hello = "hello";
    n = s.size();
    int j = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == hello[j]){
            if(j < 5) {
                j++;
            }
        }
    }
    if(j == 5) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}



