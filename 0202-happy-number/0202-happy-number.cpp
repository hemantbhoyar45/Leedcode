class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;

        while(n != 1){
            if(s.count(n)){
                return false;
            }

            s.insert(n);
            int ans = 0;

            while(n > 0){
                int digit = n % 10;
                ans = ans + digit * digit;
                n = n/ 10;
            }
            n = ans;
        }
        return true;
    }
};