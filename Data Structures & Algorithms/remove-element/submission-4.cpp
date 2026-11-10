class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        int i=0,j=0;
        while(i<size && nums[i]!=val)
        {
            i++;
            j++;
        }
        while(i<size && j<size)
        {
            if(nums[j]==val)
            {
                j++;
            }
            else
            {
                swap(nums[i],nums[j]);
                i++;
                j++;
            }
        }
        return i;
    }
};