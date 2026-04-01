/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ret)
    {
        if(!root)
        {
            return;
        }
        
        if(root->left)inorder(root->left,ret);
        ret.push_back(root->val);
        if(root->right)inorder(root->right,ret);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>test;
        inorder(root,test);
        return test;
    }
};