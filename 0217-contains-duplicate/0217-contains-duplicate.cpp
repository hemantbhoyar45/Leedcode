class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        for(int i = 0;i < n;i++){
            int val = nums[i];
            if(s.find(val) != s.end()){
                return true;
            }
             s.insert(val);
            
        }
        return false;
    }
};