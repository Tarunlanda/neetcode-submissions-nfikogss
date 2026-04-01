class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1,area =0;
        while(i<j)
        {
            int temp = (j-i)*min(heights[i],heights[j]);
            area = max(area,temp);
            if(heights[i]>heights[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return area;
    }
};
