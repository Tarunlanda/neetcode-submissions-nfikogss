class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            if(mp[target - nums[i]]!=0)
            {
                return {mp[target - nums[i]]-1,i};
            }
            mp[nums[i]]= i+1;
        }
        return {};
    }
};
