#include<iostream>
//Niketan
using namespace std;

int gcd(long long int a , long long int b)
{
    a = abs(a);
    b = abs(b);

    if(a==0){
        return b;
    }
    return gcd(b%a, a);
}
int main()
{
    long long int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}
