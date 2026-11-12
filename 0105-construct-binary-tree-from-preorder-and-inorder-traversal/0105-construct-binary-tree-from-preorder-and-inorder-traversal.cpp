class Solution {
    TreeNode* build(vector<int>& preorder, int& preIndex,
                    int inStart, int inEnd, unordered_map<int,int>& inMap) {
        // base case
        if (inStart > inEnd) return nullptr;

        // get current root value from preorder
        int rootVal = preorder[preIndex++];
        TreeNode* root = new TreeNode(rootVal);

        // find the index of root in inorder
        int position = inMap[rootVal];

        // build left subtree first, then right
        root->left = build(preorder, preIndex, inStart, position - 1, inMap);
        root->right = build(preorder, preIndex, position + 1, inEnd, inMap);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        int preIndex = 0;

        // map value -> index for inorder for O(1) lookup
        unordered_map<int,int> inMap;
        for (int i = 0; i < n; i++)
            inMap[inorder[i]] = i;

        return build(preorder, preIndex, 0, n - 1, inMap);
    }
};
