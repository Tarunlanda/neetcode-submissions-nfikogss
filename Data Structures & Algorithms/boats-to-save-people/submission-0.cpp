class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int size = people.size();
        int i=0,j=size-1,count =0;
        while(i<=j)
        {
            if(people[j]+people[i]>limit)
            {
                j--;
            }
            else 
            {
                j--;
                i++;
            }
            count ++;
        }
        return count;
    }
};