class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int len = A.size();
        int ans = 0;
        int i = 0;
        for(i = 0; i < len-1; i++){
            if(A[i] > A[i+1]){
                break;
            }
        }
        return i;
    }
};
