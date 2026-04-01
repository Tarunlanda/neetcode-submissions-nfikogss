class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26, 0);

        for (char c : s1) count[c - 'a']++;

        int l = 0;

        for (int r = 0; r < s2.size(); r++) {
            count[s2[r] - 'a']--;

            // If count goes negative → shrink
            while (count[s2[r] - 'a'] < 0) {
                count[s2[l] - 'a']++;
                l++;
            }

            if (r - l + 1 == s1.size()) return true;
        }

        return false;
    }
};