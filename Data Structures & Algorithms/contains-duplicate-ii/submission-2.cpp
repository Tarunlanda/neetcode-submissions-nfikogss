class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j=0;
        unordered_map<int,int> mp;
        while(j<n && j<=k)
        {
            if(mp[nums[j]]!= 0)
            {
                return true;
            }
            mp[nums[j]]+=1;
            j++;
        }
       while(j < n) {
            mp[nums[i]]--;
            i++;

            if(mp[nums[j]] != 0)
                return true;

            mp[nums[j]]++;
            j++;
        }
        return false;
    }
};