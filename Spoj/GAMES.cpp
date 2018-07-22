#include<iostream>
#include<cstring>

using namespace std;

int power(long long int x, long long int y)
{
    if(y == 0){
        return 1;
    }
    else if(y % 2){
        return x*power(x, y/2)*power(x, y/2);
    }
    else{
        return power(x, y/2)*power(x, y/2);
    }
}

int gcd(long long int a, long long int b)
{
    // Everything divides 0
    if(a== 1 || b == 1){
        return 1;
    }
    if (a == 0 || b == 0)
       return 0;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    long long int t, i, len;
    string n;
    string dec;
    cin >> t;
    while(t--){
        cin >> n;
        i = 0;
        len = n.length();
        dec = '0';
        while(i < len && n[i] != '.') i++;
        if(i < len){
            dec = n.substr(i+1, len-1);

        }
        //cout << "dec  = " << dec << endl;
        if(stoi(dec) == 0){
            cout << "1" << endl;
            continue;
        }

        long long int dlen = dec.size();
        long long int denum = power(10, dlen);
        //cout << "dec len is " << dec.length() << " denum = " << denum << endl;
        long long int hcf = gcd(denum, stoi(dec));
        cout << denum/hcf << endl;
        /*
        if(denum % stoi(dec)){
            cout << (denum/10) << endl;
        }
        else {
            cout << denum/stoi(dec)/10 << endl;
        }
        */

    }
    return 0;
}
