class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        int size = strs.size();
        for(int i=0;i<size;i++)
        {
            string hashCount = strs[i];
            sort(hashCount.begin(),hashCount.end());
            mp[hashCount].push_back(strs[i]);
        }
        vector<vector<string>>anagramsGrouped;
        for(auto &p : mp)
        {
            anagramsGrouped.push_back(p.second);
        }
        return anagramsGrouped;
    }
};
