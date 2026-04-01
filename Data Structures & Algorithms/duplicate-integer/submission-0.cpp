class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool duplicateExits = false;
        unordered_map<int,int> ump;
        int size = nums.size();
        for(int i=0;i<size;i++)
        {
            if(ump[nums[i]]!= 0)
            {
                return true;
            }
            else
            {
                ump[nums[i]]++;
            }
        }
        return duplicateExits;
    }
};