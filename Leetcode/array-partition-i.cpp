class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        long int len = nums.size();
        long int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < len; i += 2){
            ans += nums[i];
        }
        return ans;
    }
};
