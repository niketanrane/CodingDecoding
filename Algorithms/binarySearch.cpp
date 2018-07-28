#include<iostream>

#define ll long long
using namespace std;

int binarySearch(ll int s, ll int e, ll int *b, ll int x)
{
    ll int mid = 0;
    while(s < e){
        mid = (s + e)/2;
        if(b[mid] == x){
            return mid;
        }
        if(b[mid] < x){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }

    return -1;
}

int main()
{
    ll int n, a[105], num;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Number to search is ?" << endl;
    cin >> num;
    cout << "Found at index " << binarySearch(0, n-1, a, num) << endl;
    return 0;
}
