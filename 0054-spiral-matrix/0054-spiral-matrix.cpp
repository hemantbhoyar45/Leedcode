class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
           int n  =  matrix.size();
           int m = matrix[0].size();

           int startrow = 0;
           int startcol = 0;
           int endrow = n-1;
           int endcol = m-1;

           int cnt = m*n;
           int index = 0;
           vector<int>ans;

           while(index < cnt){
               // startrow;
                for(int i = startcol;i<=endcol && index < cnt;i++){
                     ans.push_back(matrix[startrow][i]);
                     index++;
                }
                startrow++;
               // endcol
                for(int i = startrow;i <= endrow && index < cnt;i++){
                     ans.push_back(matrix[i][endcol]);
                     index++;
                } 
                endcol--;
               //emdrow;
                for(int i = endcol;i>=startcol  && index < cnt;i--){
                     ans.push_back(matrix[endrow][i]);
                     index++;
                }
                endrow--;
               //startcol;
                for(int i = endrow;i>=startrow  && index < cnt;i--){
                     ans.push_back(matrix[i][startcol]);
                     index++;
                }
                 startcol++;

           }
           return ans;

    }
};