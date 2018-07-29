class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned long long int ans = 0;
        unsigned i = 0;
        i = 1 << 31;
        //printf("%ulld", i);
        while(i > 0){
            //printf("%ulld\n", i);
            if((x&i) != (y&i)){
                ans += 1;
            }
            i /= 2;
        }
        return ans;
    }
};
