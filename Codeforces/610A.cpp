//Niketan
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if(n%2){
        cout << "0" << endl;
    }
    else if(n%4){
        cout << n/4 << endl;
    }
    else{
        cout << (n/4) - 1 << endl;
    }
    return 0;
}



