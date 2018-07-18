//Niketan
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp, total, ans, left = 0;
    char a[5];
    cin >> n;
    ans = 0;
    while(n--){
        cin >> a;
        for(int i = 0; i < strlen(a); i++){
            if(a[i] == '+') left++;
            else if(a[i] == '-') left--;
        }
    }
    cout << left/2 << endl;
    return 0;
}


