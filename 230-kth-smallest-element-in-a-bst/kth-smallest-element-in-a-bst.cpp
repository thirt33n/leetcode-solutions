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

    void inorder(TreeNode *root,vector<int> &holder)
    {
        if(!root)
            return;

        inorder(root->left,holder);
        holder.push_back(root->val);
        inorder(root->right,holder);
        
    }

    int kthSmallest(TreeNode* root, int k) {
       vector<int> holder;
        inorder(root,holder);
        int val;
        for(int i=0;i<holder.size();i++)
        {
            if(i==k-1)
                val = holder[i];
        }
        
        return val;
    }
};