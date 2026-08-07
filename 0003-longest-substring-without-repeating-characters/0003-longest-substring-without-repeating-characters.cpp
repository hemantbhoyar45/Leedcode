class Solution {
public:
    int lengthOfLongestSubstring(string s){
        unordered_set<int>st;
        int n =  s.length();
        int maxlen = 0;
        int left = 0;

        for(int right = 0; right < n; right++){
             while(st.count(s[right])){
                st.erase(s[left]);
                left++;
             }
             st.insert(s[right]);
            maxlen = max(maxlen , right - left + 1);
        }
        return maxlen;
    }
};