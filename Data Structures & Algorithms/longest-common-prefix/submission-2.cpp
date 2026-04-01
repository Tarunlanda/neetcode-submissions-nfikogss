class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        int minSize = INT_MAX;
        int arraySize = str.size();
        for(int i=0;i<arraySize;i++)
        {
            minSize = min(minSize,(int)str[i].size());
        }
        if(minSize ==0 )
        {
            return "";
        }
        for(int i=0;i<minSize;i++)
        {
            bool check = true;
            for(int j =1;j<arraySize&&check;j++)
            {
                if(str[j][i]!=str[j-1][i])
                {
                    check = false;
                }
            }
            if(!check)
            {
                return str[0].substr(0,i);
            }
        }
        cout<<str[0].substr(0,1)<<endl;
        return str[0].substr(0,minSize);
    }
};