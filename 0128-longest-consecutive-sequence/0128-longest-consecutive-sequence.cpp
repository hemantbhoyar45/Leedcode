class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> st;
        int cnt = 1;
        int maxcnt = INT_MIN;

        if(n <= 0){
            return 0;
        }

        for(int i = 0; i < n; i++){
            st.insert(nums[i]);
        }

        for(auto x : st){
            int first = x;
            if(st.count(first + 1)){
                cnt++;
            }else{
                cnt = 1;
            }
          maxcnt  = max(maxcnt , cnt);
          first = x + 1;
        }
        return maxcnt == INT_MIN ? 0: maxcnt;
    }
};