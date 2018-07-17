class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        int s = -1, m = 0, e = 0;
        e = len;
        while(m < e){
            if(nums[m] == 0){
                s++;
                swap(&nums[s], &nums[m]);
            }
            else if(nums[m] == 1){
                m++;
            }
            else{
                e--;
                swap(&nums[e], &nums[m]);
            }
            if(s == m){
                m++;
            }
        }
    }
    int swap(int *a, int *b){
        int temp = 0;
        temp = *a;
        *a = *b;
        *b = temp;
        return 0;
    }
};
