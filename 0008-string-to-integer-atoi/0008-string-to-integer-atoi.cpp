class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int sign = 1;
        long result = 0;

        // Step 1: Skip leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Handle + or - sign
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Step 3: Read digits and build the number
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');

            // Step 4: Clamp the result if it goes beyond range
            if (sign * result >= INT_MAX) return INT_MAX;
            if (sign * result <= INT_MIN) return INT_MIN;

            i++;
        }

        return sign * result;
    }
};
