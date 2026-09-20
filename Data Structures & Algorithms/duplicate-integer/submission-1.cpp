class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]])
            {
                return true;
            }
            mp[nums[i]]++;
        }
        return false;
    }
};