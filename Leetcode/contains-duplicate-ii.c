class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int len = nums.size();
        map<int, int>mp;
        //printf("len = %d\n", len);
        for(int i = 0; i < len; i++){
            if(mp.find(nums[i]) != mp.end() & ((i - mp[nums[i]]) <= k)){
                return true;
            }
            mp[nums[i]] = i;
            //printf(" set as %d\n", mp[nums[i]]);
        }
        return false;
    }
};
