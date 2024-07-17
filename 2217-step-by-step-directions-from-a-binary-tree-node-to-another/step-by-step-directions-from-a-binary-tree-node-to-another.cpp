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


    TreeNode* LCA(TreeNode *root,int s,int d)
    {
        if(!root || root->val == s || root->val == d)
            return root;
        TreeNode * l = LCA(root->left,s,d);
        TreeNode *r = LCA(root->right,s,d);

        if(!l)
            return r;
        else if(!r)
            return l;
        else
            return root;
    }

    bool pathFinder(TreeNode *lca,int x,string &str)
    {
        if(!lca)
            return false;
        if(lca->val == x)
            return true;
        str+='L';
        if(pathFinder(lca->left,x,str))
            return true;
        str.pop_back();
        str+='R';
        if(pathFinder(lca->right,x,str))
            return true;
        str.pop_back();

        return false;

        
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        
        TreeNode *lowComA = LCA(root,startValue,destValue);
        string startWay = "";
        string destWay = "";
        string sol;

        pathFinder(lowComA,startValue,startWay);
        pathFinder(lowComA,destValue,destWay);

        for(char c:startWay)
            sol+='U';
        sol.append(destWay);

        return sol;

    }
};