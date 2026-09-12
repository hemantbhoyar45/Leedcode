class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
       
       int mini = INT_MAX;

        for(int i = 0; i < n; i++){
          string temp = haystack.substr(i , m);
           if(needle == temp){
            mini = min(mini , i);
           }
        }
        if(mini == INT_MAX){
            return -1;
        }
        return mini;
    }
};