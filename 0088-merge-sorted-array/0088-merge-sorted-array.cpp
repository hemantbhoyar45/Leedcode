class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int k = m;
       for(int i = 0; i < nums2.size();i++){
            nums1[k] = nums2[i];
            k++;
       }
       sort(nums1.begin(),nums1.end());
       return ;
    }
};