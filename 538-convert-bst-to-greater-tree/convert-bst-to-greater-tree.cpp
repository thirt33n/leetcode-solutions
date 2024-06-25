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

    void replacer(TreeNode *root,vector<int>& vals)
    {
        if(!root)
            return;
        int sumer = 0;
        replacer(root->left,vals);
        replacer(root->right,vals);
        for(int i:vals)
        {
            if(i>root->val)
                sumer+=i;

        }
        root->val+=sumer;
    }

    void traverse(TreeNode *root,vector<int>& vals)
    {
        if(!root)
            return;
        traverse(root->left,vals);
        vals.push_back(root->val);
        traverse(root->right,vals);

    }


    TreeNode* convertBST(TreeNode* root) {
        vector<int> vals;
        traverse(root,vals);
        replacer(root,vals);
        
        return root;
    }
};