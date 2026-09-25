class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxElement= nums[0], count= 1;
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            if(maxElement == nums[i])
            {
                count++;
            }
            else
            {
                count--;
                if(count<0)
                {
                    maxElement = nums[i];
                }
            }
        }
        return maxElement;
    }
};