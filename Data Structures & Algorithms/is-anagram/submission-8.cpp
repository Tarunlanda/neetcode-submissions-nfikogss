class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        int tsize = t.size();
        int ssize = s.size();
        if(tsize != ssize)
        {
            return false;
        }
        for(int i=0;i<ssize;i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<ssize;i++)
        {
            if(mp[t[i]]==0)
            {
                return false;
            }
            mp[t[i]]--;
        }
        return true;
    }
};
