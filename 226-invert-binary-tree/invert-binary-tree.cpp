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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)  return NULL;

        stack<TreeNode*> s;
        s.push(root);
        
        while(!s.empty())
        {
            TreeNode *node = s.top();
            s.pop();

            TreeNode *t = node->left;
            node->left = node->right;
            node->right = t;

            if(node->left)  s.push(node->left);
            if(node->right)  s.push(node->right);
        }
        return root;
    }
};