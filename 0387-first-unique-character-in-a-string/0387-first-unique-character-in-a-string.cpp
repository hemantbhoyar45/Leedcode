class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char , int> mp;
        int n = s.length();

        for(int i = 0; i < n; i++){
            char ch = s[i];
            mp[ch]++;
        }

        for(int i = 0; i < n; i++){
             char ch = s[i];
            if(mp[ch] == 1){
                return i;
            }
        }

        return -1;
    }
};