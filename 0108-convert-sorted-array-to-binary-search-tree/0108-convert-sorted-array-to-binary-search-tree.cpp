class Solution {
   TreeNode* BuildBST(vector<int>& nums , int s , int e){

        if(s > e) return nullptr; //Base case
        //find the mid
        int mid = (s + e)/2;
        TreeNode* root = new TreeNode(nums[mid]);

        //call for left and right
        root->left = BuildBST(nums , s , mid - 1);
        root->right = BuildBST(nums , mid + 1 , e);

        return root;

    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return BuildBST(nums , 0 , n - 1);
    }
};