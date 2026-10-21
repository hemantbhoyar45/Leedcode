// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         MOORE-BOYER ALGORITHMS
//         int n = nums.size();
//         int  freq = 0;
//         int ans = 0;
       

//         for(int i = 0; i < n; i++){
//             if(freq == 0){
//                 ans = nums[i];
//             }
//             if(ans == nums[i]){ 
//                 freq++;
//             }else{
//                 freq--;
//             }
//         }
//      return ans;
//     }
// }
//        sort(nums.begin() , nums.end());
//            int n = nums.size();
//            int freq = 1;
//            int ans = nums[0];

//            for(int i = 1; i < n; i++){
//               if(nums[i] == nums[i-1]){
//                 freq++;
//             }
//             else{
//                 freq = 1;
//                 ans = nums[i];
//             }
//           if(freq > n/2){ 
//             return ans;
//         }
//      }
//         return ans;
//     }
// };
class Solution {
public:
    int majorityElement(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int n = arr.size();
        int cnt = 1, maxcnt = 1;
        int ans = arr[0];

        for (int i = 1; i < n; i++) {
            if(arr[i] == arr[i - 1]) {
                cnt++;
            } else {
                cnt = 1;
            }

            if(cnt > maxcnt) {
                maxcnt = cnt;
                ans = arr[i];
            }
        }
        return ans;
    }
};
