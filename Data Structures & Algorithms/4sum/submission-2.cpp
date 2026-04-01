class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        set<vector<int>> result;

        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                int left = j + 1;
                int k = n - 1;

                while(left < k) {

                    long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[k];

                    if(sum == target) {
                        result.insert({nums[i], nums[j], nums[left], nums[k]});
                        left++;
                        k--;
                    }
                    else if(sum > target) {
                        k--;
                    }
                    else {
                        left++;
                    }
                }
            }
        }

        vector<vector<int>> v(result.begin(), result.end());
        return v;
    }
};