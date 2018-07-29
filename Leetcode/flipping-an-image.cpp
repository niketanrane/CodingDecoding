class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        int len = A.size();
        int i = 0, end = 0, start = 0;
        for(i = 0; i < len; i++){
            start = 0;
            end = A[i].size() - 1;
            while(start <= end){
                if(A[i][start] == A[i][end]){
                    if(A[i][start] == 1){
                        A[i][start] = 0;
                        A[i][end] = 0;
                    }
                    else if(A[i][start] == 0){
                        A[i][start] = 1;
                        A[i][end] = 1;
                    }

                }
                start +=1;
                end -=1;
            }
        }
        return A;
    }
};
