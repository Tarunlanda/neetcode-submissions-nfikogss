class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int n= nums.size();
        vector<int>result;
        int flag=0;
        for(int i=0;i<n&&flag ==0;i++)
        {
            if(mp[nums[i]]&&mp[nums[i]]-1 !=i)
            {
                result.push_back(mp[nums[i]]-1);
                result.push_back(i);
                flag=1;
            }
            mp[target-nums[i]]=i+1;
        }
        return result;
    }
};
