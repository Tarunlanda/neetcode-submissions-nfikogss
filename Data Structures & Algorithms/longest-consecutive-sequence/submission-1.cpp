class Solution {
public:
    int find1(int x,vector<int>&parent)
    {
        if(parent[x] != x)
            parent[x] = find1(parent[x], parent);
        return parent[x];
    }
    void unite(int x,int y,vector<int>&parent,vector<int>&sizes)
    {
        int px = find1(x,parent);
        int py = find1(y,parent);
        if(px == py)
        {
            return;
        }
        parent[py]=px;
        sizes[px]+=sizes[py];
    }
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int>parent;
        vector<int>sizes(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=i;
            parent.push_back(i);
        }
        for(auto &[num, idx] : mp){
            
            if(mp.count(num + 1)){
                unite(idx, mp[num + 1], parent,sizes);
            }
        }
        int max1 =0;
        for(int i=0;i<nums.size();i++)
        {
            if(parent[i]==i)
                max1=max(max1,sizes[i]);
        }
        return max1;
    }
};
