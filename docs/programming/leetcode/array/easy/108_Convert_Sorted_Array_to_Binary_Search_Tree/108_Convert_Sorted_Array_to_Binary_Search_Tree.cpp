/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createBST(nums, 0, nums.size()-1);
    }
private:
    TreeNode* createBST(vector<int> nums, int l, int r){
        if(l>r) return nullptr;
        int m = (l + r)/2;
        TreeNode * root = new TreeNode(nums[m]);
        root->left = createBST(nums, l, m-1);
        root->right = createBST(nums, m+1, r);
        return root;
    }
};
