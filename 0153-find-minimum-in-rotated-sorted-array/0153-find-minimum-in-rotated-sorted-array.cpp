class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini = INT_MAX;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int val = nums[i];
            mini = min(mini, val);
        }
        return mini == INT_MAX ? 0 : mini;
    }
};