#include<bits/stdc++.h>

using namespace std;

int main()
{
    char A[105];
    char B[105];
    cin >> A >> B;
    for(int i = 0; i < strlen(A); i++){
        A[i] = tolower(A[i]);
        B[i] = tolower(B[i]);
    }
    int ans = strcmp(A, B);
    cout << ans << endl;
    return 0;
}
