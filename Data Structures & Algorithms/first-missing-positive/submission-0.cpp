class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        int value =-1;
        for(int i=1;i<100002;i++)
        {
            if(mp[i]==0)
            {
                return i;
            }
        }
        return value;
    }
};