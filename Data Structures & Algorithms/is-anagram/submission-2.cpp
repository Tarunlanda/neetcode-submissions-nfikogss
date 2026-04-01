class Solution {
public:
    bool isAnagram(string s, string t) {
        int sizeS = s.size();
        int sizeT = t.size();
        if(sizeS!=sizeT)
        {
            return false;
        }
        bool Anagram = true;
        unordered_map<char,int> mp;
        for(int i=0;i<sizeT;i++)
        {
            mp[t[i]]++;
        }
        for(int i=0;i<sizeS;i++)
        {
            if(mp[s[i]]==0)
            {
                return false;
            }
            else
            {
                mp[s[i]]=mp[s[i]]-1;
            }
        }
        return Anagram;
    }
};
