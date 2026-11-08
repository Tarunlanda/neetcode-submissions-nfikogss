class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            if(mp[nums[i]]>0)
            {
                return true;
            }
            mp[nums[i]]++;
        }
        return false;
    }
};