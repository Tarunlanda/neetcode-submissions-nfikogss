class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP =INT_MAX,n=prices.size(),res=0;
        for(int i=1;i<n;i++)
        {
            minP = min(minP,prices[i-1]);
            res =max(res,prices[i]-minP);
        }
        return res;
    }
};
