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
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root == NULL){
            return 0;
        }
        int sumLeftTree = rangeSumBST(root->left, L, R);
        int sumRightTree = rangeSumBST(root->right, L, R);
        int ans = sumLeftTree + sumRightTree;
        if(L <= root->val && root->val <= R){
             ans += root->val;
        }
        return ans;
    }
};