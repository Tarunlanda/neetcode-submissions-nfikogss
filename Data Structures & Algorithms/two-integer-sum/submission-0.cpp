class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int,int> mp;
        vector<int>positionPair;
        for(int i=0;i<size;i++)
        {
            if(mp[nums[i]]!=0)
            {
                positionPair.push_back(mp[nums[i]]-1); 
                positionPair.push_back(i);
                return positionPair;
            }
            mp[target-nums[i]]= i+1;
        }
        return positionPair;
    }
};
