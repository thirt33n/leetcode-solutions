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

    int diam(TreeNode* root,int &depth)
    {
        if(!root)   return 0;
        int left = diam(root->left,depth);
        int right = diam(root->right,depth);
        depth = max(depth,left+right);
        return max(left,right)+1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int depth = 0;
        diam(root,depth);
        return depth;
    }
};