class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]=i+1;
        }
        int i=0,j=n-1;
        vector<vector<int>>result;
        for(int i=0;i<n;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int left =i+1;
            j=n-1;
            while(left<j)
            {
                if(nums[left]+nums[i]+nums[j]==0 && left<j)
                {
                    result.push_back({nums[i],nums[left],nums[j]});
                    left++;
                    j--;
                    while(left < j && nums[left] == nums[left-1])
                        left++;

                    while(left < j && nums[j] == nums[j+1])
                        j--;
                }
                else if(nums[left]+nums[i]+nums[j] > 0)
                {
                    j--;
                    while(left<j&&nums[j]==nums[j+1])
                    {
                        j--;
                    }
                }
                else
                {
                    left++;
                    while(left<j && nums[left]==nums[left-1])
                    {
                        left++;
                    }
                }
            }
        }
        return result;
    }
};
