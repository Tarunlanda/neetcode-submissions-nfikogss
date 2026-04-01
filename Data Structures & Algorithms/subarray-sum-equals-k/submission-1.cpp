class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i=0,j=0,size = nums.size();
        int count =0,sum =0;
        unordered_map<int,int>mp;
        mp[0]++;
        for(int i=0;i<size;i++)
        {
            sum +=nums[i];
            count += mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};