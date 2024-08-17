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

    void findKsmall(TreeNode *root,int k,int &count,int &sol)
    {
        if(!root)   return;
        findKsmall(root->left,k,count,sol);
        count++;
        if(count == k)
           { sol = root->val;}
        findKsmall(root->right,k,count,sol); 
    }

    int kthSmallest(TreeNode* root, int k) {
        int count = 0,sol = 0;
         findKsmall(root,k,count,sol);
         return sol;
    }
};