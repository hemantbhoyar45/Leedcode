class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> first;
        unordered_map<char, char> second;

        int n = s.length();
        int m = t.length();

        if (n != m)
            return false;

        for (int i = 0; i < n; i++) {

            if (first.find(s[i]) == first.end() &&
                second.find(t[i]) == second.end()) {
                first[s[i]] = t[i];
                second[t[i]] = s[i];
            }
            else{
                if(first[s[i]] != t[i] || second[t[i]] != s[i]) return false;
            }
        }
        return true;
    }
};