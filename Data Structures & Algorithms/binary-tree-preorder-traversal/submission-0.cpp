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
        
        ret.push_back(root->val);
        if(root->left)inorder(root->left,ret);
        if(root->right)inorder(root->right,ret);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>test;
        inorder(root,test);
        return test;
    }
};
