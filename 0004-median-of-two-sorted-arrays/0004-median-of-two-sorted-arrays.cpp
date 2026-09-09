class Solution {
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
           int n = nums1.size();
           int m = nums2.size();
           
           vector<int> temp;
           int i = 0;
           int j = 0;
          while(i < n && j < m){
              if(nums1[i] < nums2[j]){
                  temp.push_back(nums1[i++]);
              } else{
                   temp.push_back(nums2[j++]);
              }
           }
           while(i < n){
            temp.push_back(nums1[i++]);
           }
           while(j < m){
            temp.push_back(nums2[j++]);
           }

           int  p = temp.size();
           if(p % 2 != 0){
              return temp[p / 2];
           }else{
                double ans = (temp[p/ 2] + temp[p / 2 - 1]) / 2.0; 
                return ans;
           }

    }
};