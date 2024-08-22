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
    void traverse(TreeNode *root,int &prev,int &dif)
    {
        if(!root)   return;
        traverse(root->left,prev,dif);
        if(prev!=-1)
        {
            dif = min(dif,root->val-prev);
        }
        prev = root->val;
        traverse(root->right,prev,dif);
    }

    int minDiffInBST(TreeNode* root) {
        int prev = -1;
        int dif = INT_MAX;
        traverse(root,prev,dif);
        return dif;
    }
};