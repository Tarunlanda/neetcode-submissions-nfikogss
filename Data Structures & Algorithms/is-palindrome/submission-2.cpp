class Solution {
public:
    bool isPalindrome(string s) {
        bool valid = true;
        int i=0,j=s.size()-1,n=s.size();
        while(i<j)
        {
            while(!((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) && i<j)
            {
                i++;
            }
            while(!((s[j] >= '0' && s[j] <= '9') || (s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z')) && j>i)
            {
                j--;
            }
            if(toupper(s[i])!=toupper(s[j]))
            {
                return false;
            }
            i++;
            j--;
        }
        return valid;
    }
};
