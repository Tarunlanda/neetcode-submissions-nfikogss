class TrieNode
{
    public:
        TrieNode* children[26];
        bool isLeaf;
        TrieNode() {
            isLeaf = false;
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
};
void insert(TrieNode *root, string s)
{
    TrieNode* curr = root;
    for(char c: s)
    {
        if(curr->children[c-'a']==nullptr)
        {
            TrieNode* newnode = new TrieNode();
            curr->children[c-'a']= newnode;
        }
        curr = curr->children[c-'a'];
    }
    curr->isLeaf = true;
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        TrieNode* root = new TrieNode;
        int size = strs.size();
        for(int i=0;i<size;i++)
        {
            if(strs[i].empty())
                return "";
            insert(root,strs[i]);
        }
        int count =0;
        TrieNode* curr = root;
        while(curr)
        {
            TrieNode* next;
            int childCount=0;
            for(int i=0;i<26;i++)
            {
                if(curr->children[i]!=nullptr)
                {
                    childCount++;
                    next = curr->children[i];
                }
            }
            if(curr->isLeaf || childCount != 1)
            {
                return strs[0].substr(0, count);
            }
            else
            {
                count++;
            }
            curr = next;
        }
        return strs[0].substr(0, count);
    }
};