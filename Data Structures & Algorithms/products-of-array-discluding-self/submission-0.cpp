class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        long long int prod=1;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                prod*=nums[i];
            }
            else
            {
                count++;
            }
        }
        vector<int>ret;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
                ret.push_back(prod/nums[i]);
            }
            else if(count==1)
            {
                if(nums[i]!=0)
                {
                     ret.push_back(0);
                }
                else
                {
                     ret.push_back(prod);
                }
            }
            else
            {
                 ret.push_back(0);
            }
        }
        return ret;
    }
};