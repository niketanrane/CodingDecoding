class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1, mid = 0;
        int ans = nums[left];
        while(left <= right){
            mid = (left+right)/2;
            if(nums[mid] < nums[right]){
                ans = min(ans, nums[mid]);
                right = mid - 1;
            }
            else if(nums[mid] >= nums[right]){
                ans  = min(ans, nums[right]);
                left = mid + 1;
            }
        }
        return ans;
    }
};