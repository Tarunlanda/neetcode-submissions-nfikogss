class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size()<=1)return {strs};
        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            vector<int>v(26,0);
            int m = strs[i].size();
            for(int j=0;j<m;j++){
                v[strs[i][j]-'a']++;
            }
            string strMap="";
            for(int k=0;k<26;k++)
            {
                strMap+=char(v[k]);
            }
            mp[strMap].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
