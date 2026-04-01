class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.size();
        int i=0;
        int maxLength=0;
        int j=i-1;
        i=0;
        for (int j = 0; j < s.size(); j++) {
            if (mp.find(s[j]) != mp.end()) {
                i = max(i, mp[s[j]]);
            }

            maxLength = max(maxLength, j - i + 1);
            mp[s[j]] = j + 1;
        }

        return maxLength;
    }
};
