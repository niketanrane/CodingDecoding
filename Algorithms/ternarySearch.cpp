#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<cstring>

//created by : niketanrane

using namespace std;

double func(double x)
{
    return 2*(x*x) - (12*x) + 7;
}

int main()
{
    int n;
    double l, r, mid1, mid2;
    cin >> n;
    while(n--){
       cin >> l >> r;
        for(int i = 0; i < 200; i++){
            //mid1 = l + (r-l)/3;
            //mid2 = r - (r-l)/3;
            mid1 = (l*2+r)/3;
            mid2 = (l+2*r)/3;
            if(func(mid1) >= func(mid2)){
                l = mid1;
            }
            else{
                r = mid2;
            }
        }
        long long int ans = (long long int)(floor(func(mid1)));
        cout << ans << endl;
    }

    return 0;
}

/*
Another beautiful method to use

while(lo < hi) {
    int mid = (lo + hi) >> 1;
    if(f(mid) > f(mid+1)) {
        hi = mid;
    }
    else {
        lo = mid+1;
    }
}

You'd normally use binary search for finding an element from an increasing sequence of values,
and ternary search for finding the maximum when the values first increase and then start decreasing at some point.

The observation here is that you can replace ternary search with a binary search for the point when the sign between adjacent values change.
This is of course a simple thing, but in many places you can find the recommended solution being ternary search, which is harder to get right and less efficient.
*/
