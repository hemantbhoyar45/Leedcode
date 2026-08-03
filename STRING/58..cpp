class Solution {
public:
    int lengthOfLastWord(string m) {
        int n = s.length();
        
        int i = n - 1;
        while(i >= 0 && s[i] == ' '){
            i--;
        }
        int cnt = 0;

        while(i >= 0 && s[i] != ' '){
            cnt++;
            i--;
        }
        return cnt;
    }
};