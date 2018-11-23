#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    long long int n, m, ans = 0;
    cin >> n >> m;
    ans = m/n;
    if( m % n)ans++;
    cout << ans << endl;
    return 0;
}
