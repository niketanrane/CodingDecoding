class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int cur = 0;
        int i = 0;
        int rem = 0;
        vector<int> ans;
        while(left <= right){
            cur = left;
            i = left;
            rem = 0;
            //printf("left = %d right = %d", left, right);
            if(cur % 10 == 0){
                left++;
                continue;
            }
            while(i > 0){
                //printf("cur = %d i is %d\n", cur, i);
                rem = i % 10;
                if(rem == 0){
                    break;
                }
                if(cur % rem){
                    break;
                }
                i /= 10;
            }
            if(i <= 0){
                ans.push_back(cur);
            }
            left++;
        }
        return ans;
    }
};
