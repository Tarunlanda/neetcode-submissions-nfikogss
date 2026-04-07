class Solution {
public:
    int majorityElement(vector<int>& nums) {
        stack<int>st;
        int size =nums.size();
        for(int i=0;i<size;i++)
        {
            if(st.empty() || st.top() == nums[i])
            {
                st.push(nums[i]);
            }
            else
            {
                st.pop();
            }
        }
        return st.top();
    }
};