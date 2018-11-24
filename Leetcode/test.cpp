#include<iostream>
#include<strings.h>
#include<math.h>

using namespace std;

int main()
{
    long long int n = 0, ans = 0;

    scanf("%lld", &n);
    //printf("%lld\n", n);

    for(int i = 2; i < 1000000; i++){
        if(n % i == 0){
            cout << 1 + (n - i)/2 << endl;
            return 0;
        }
    }
    cout << "1" << endl;
    return 0;



    return 0;
}
