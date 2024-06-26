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

    TreeNode* creator(vector<int> holder,int l,int r)
    {
        if(l>r)
            return nullptr;
        int mid = l+(r-l)/2;
        TreeNode* ltree = creator(holder,l,mid-1);
        TreeNode* rtree = creator(holder,mid+1,r);

        return new TreeNode(holder[mid],ltree,rtree);
    }

    void inorder(TreeNode* root,vector<int> &holder)
    {
        if(!root)
            return;
        inorder(root->left,holder);
        holder.push_back(root->val);
        inorder(root->right,holder);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> holder;
        inorder(root,holder);
        
        return creator(holder,0,holder.size()-1);
    }
};