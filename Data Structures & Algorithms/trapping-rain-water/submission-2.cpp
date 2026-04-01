class Solution {
public:
    int trap(vector<int>& height) {
        int n =height.size();
        vector<int> prefix(n,0),suffix(n,0);
        for(int i=1;i<n;i++)
        {
            prefix[i] = max(prefix[i-1],height[i-1]);
        }
        for(int i=n-2;i>-1;i--)
        {
            suffix[i] = max(suffix[i+1],height[i+1]);
        }
        int sum =0;
        for(int i=1;i<n-1;i++)
        {
            int temp = min(prefix[i],suffix[i]);
            temp = (temp>height[i])? (temp-height[i]):0;
            sum += temp;
        }
        return sum;
    }
};
