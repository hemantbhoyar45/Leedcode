class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         int n = s1.length();
         int m = s2.length();
         
         string str = s1;
         sort(str.begin(),str.end());

         for(int i=0;i<m;i++){
            string temp = s2.substr(i,n);
            sort(temp.begin(),temp.end());
            if(temp==str){
                return true;
            }

         }
         return false;   
    }
};