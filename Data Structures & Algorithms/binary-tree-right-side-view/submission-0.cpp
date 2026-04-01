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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>st;
        if(root)st.push(root);
        vector<stack<int>>res;
        while(!st.empty())
        {
            int size = st.size();
            stack<int> temp;
            for(int i=0;i<size;i++)
            {
                TreeNode* tempNode = st.front();
                st.pop();
                temp.push(tempNode->val);
                if(tempNode->left)
                {
                    st.push(tempNode->left);
                }
                if(tempNode->right)
                {
                    st.push(tempNode->right);
                }
            }
            res.push_back(temp);
        }
        int size1 = res.size();
        vector<int>rightView;
        for(int i=0;i<size1;i++)
        {
            rightView.push_back(res[i].top());
        }
        return rightView;
    }
};
