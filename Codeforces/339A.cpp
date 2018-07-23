#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char s[105];
    vector <char> v;
    cin >> s;
    n = strlen(s);
    for(int i = 0; i < n; i+=2){
        v.push_back(s[i]);
    }
    sort(v.begin(), v.end());
    int veclen = v.size();
    cout << v[0];
    for(int i = 1; i < veclen; i++){
        cout << "+" << v[i];
    }
    return 0;
}
