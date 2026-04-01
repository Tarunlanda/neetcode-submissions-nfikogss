class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high = nums.size()-1;
        int low =0;
        while(low<=high && nums[low]==0)
        {
            low++;
        }
        int mid =low;
        while(mid<=high)
        {
            if(nums[mid] == 0 && mid >= low)
            {
                swap(nums[mid],nums[low]);
                low++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
            else
            {
                mid++;
            }
        }
    }
};