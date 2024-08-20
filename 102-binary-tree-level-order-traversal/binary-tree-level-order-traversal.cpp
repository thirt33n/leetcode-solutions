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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        if(!root)
            return sol;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            int lsize = q.size();
            vector<int> level;
            for(int i=0;i<lsize;i++)
            {
                TreeNode *node = q.front();
                q.pop();
                level.push_back(node->val);
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
            }
            sol.push_back(level);
        }
        return sol;
    }
};