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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        set<int> children,parents;
        unordered_map<int,vector<pair<int,int>>> rels;
        for(vector<int> v:descriptions)
        {
            children.insert(v[1]);
            parents.insert(v[0]);
            rels[v[0]].emplace_back(v[1],v[2]);
        }
        int root;
        for(int i:parents)
        {
            if(!children.contains(i))
            {  root = i; break;}
        }

        TreeNode* head = new TreeNode(root);

        queue<TreeNode*> qq;
        qq.push(head);

        while(!qq.empty())
        {
            TreeNode* parent = qq.front();
            qq.pop();
            for(auto v:rels[parent->val])
            {
                TreeNode* child = new TreeNode(v.first);
                qq.push(child);
                if(v.second)    
                    parent->left = child;
                else
                    parent->right = child;
            }
        }
        return head;
    }
};