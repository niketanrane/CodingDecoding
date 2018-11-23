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
    vector<int> inorderTraversal(TreeNode* root) {
        vector <int> ans;
        inorderTraversalUtil(root, ans);
        return ans;
    }
    
    TreeNode *inorderTraversalUtil(TreeNode *root, vector<int> &ans){
        if(root== NULL){
            return NULL;
        }
        inorderTraversalUtil(root->left, ans);
        ans.push_back(root->val);
        inorderTraversalUtil(root->right, ans);
        return root;
        
    }
};