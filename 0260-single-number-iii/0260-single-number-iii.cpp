class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
             int n = nums.size();
          vector<int> temp;
           map<int , int> mp;

        for(int i = 0; i < n;i++){
            mp[nums[i]]++;
        }

        for(auto it : mp){
            if(it.second == 1){
             temp.push_back(it.first);
            }
        }
        return temp;
    }
};