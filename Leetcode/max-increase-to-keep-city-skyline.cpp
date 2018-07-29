class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int len = grid.size();
        vector<int> row(len, 0);
        vector<int> col(grid[0].size(), 0);
        //printf("len = %d      ", len);
        for(int i = 0; i < len; i++){
            for(int j = 0; j < grid[i].size(); j++){
                //printf("%d ", grid[i][j]);
                row[i] = max(grid[i][j], row[i]);
                col[j] = max(grid[i][j], col[j]);
                //printf("row max = %d col max = %d\n", row[i], col[j]);
            }
        }
        int ans = 0;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < grid[i].size(); j++){
                ans += min(row[i], col[j]) - grid[i][j];
            }
        }
        return ans;
    }
};
