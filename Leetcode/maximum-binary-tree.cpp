/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0){
            return NULL;
        }
        int left = 0, right = nums.size()-1;
        return MaxBinTreeUtil(nums, left, right);
    }
    
    TreeNode *MaxBinTreeUtil(vector<int> &nums, int left, int right){
        if (left > right){
            return NULL;
        }
        else if(left == right){
            return new TreeNode(nums[left]);
        }
        int indexOfMax = findIndexMax(nums, left, right);
        TreeNode *root = new TreeNode(nums[indexOfMax]);
        root->left = MaxBinTreeUtil(nums, left, indexOfMax-1);
        root->right = MaxBinTreeUtil(nums, indexOfMax+1, right);
        return root;
    }
    
    int findIndexMax(vector<int> &nums, int left, int right){
        int maxIndex = left;
        for(int i = left; i <= right; i++){
            if(nums[i] > nums[maxIndex]){
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};