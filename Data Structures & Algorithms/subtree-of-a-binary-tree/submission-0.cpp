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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        if(p!=NULL && q!=NULL && p->val == q->val)
        {
            return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot == NULL)
        {
            return true;
        }
        if(subRoot == NULL)
        {
            return true;
        }
        if(root==NULL && subRoot == NULL)
        {
            return true;
        }
        if(root== NULL && subRoot )
        {
            return false;
        }
        if(root->val == subRoot->val)
        {
            return isSameTree(root,subRoot)||(isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot));
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
