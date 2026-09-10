class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x); // change number to string
        int i = 0, j = s.size() - 1; // start and end

        while (i < j) { // check from both ends
            if (s[i] != s[j]) return false; // if not same → not palindrome
            i++;
            j--;
        }
        return true; // all same → palindrome
    }
};
