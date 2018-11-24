class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size()-1, mid = 0;
        while(left < right){
            mid = (left + right)/2;
            //cout << mid << endl;
            if(mid % 2){
                if(nums[mid] == nums[mid+1]){
                    right = mid-1;
                }
                else{
                    left = mid+1;
                }
            }
            else{
                if(nums[mid] == nums[mid+1]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }    
        }
        
        return nums[left];
    }
};

/* 
In order to find the partner here, take i^1 : 
if i is even, then you will get the next odd number
if i is odd, you'll get prev even number. 
*/