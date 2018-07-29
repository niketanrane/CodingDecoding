#include<iostream>
//niketanrane

using namespace std;

int main()
{
    int n, a[105], i, j, ans = 0, temp;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return 0;
}

