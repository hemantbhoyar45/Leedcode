class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         set<int> st;
         int n = nums.size();
         int maxlen = 0;

         for(int i = 0;i < n; i++){
            st.insert(nums[i]);
         }
         for(int x : st){
             if(!st.count(x - 1)){
                int curr = x;
                int len = 1;

                while(st.count(curr + 1)){
                    curr++;
                    len++;
                }
                maxlen = max(maxlen , len);
             }
         }
         return maxlen;
    }
};