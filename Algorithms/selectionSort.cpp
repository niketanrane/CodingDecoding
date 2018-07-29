#include<iostream>
//niketanrane

using namespace std;

int main()
{
    int n, a[105], i, j, mini, temp, m;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a[i];
    }

    for(i = 0; i < n; i++){
        mini = i;
        for(j = i; j < n; j++){
            if(a[j] < a[mini]){
                mini = j;
            }
        }
        temp = a[i];
        a[i] = a[mini];
        a[mini] = temp;
    }
    for(i = 0; i < n; i++){
        cout << a[i] << " " ;
    }
    return 0;
}
