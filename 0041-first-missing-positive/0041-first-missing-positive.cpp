class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int , bool> visited;
        int n = nums.size();

        for(int i = 0;i < n; i++){
            visited[nums[i]] = true;
        }

        for(int i = 1; i <= n; i++){
            if(visited.find(i) == visited.end()){
                 return i;
            }
        }
        return n + 1;
    }
};