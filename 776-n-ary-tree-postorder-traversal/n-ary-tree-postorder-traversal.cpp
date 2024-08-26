/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    

    vector<int> postorder(Node* root) {
        if(!root)   return {};
        vector<int> soln;
        // traverse(root,soln);
        stack<Node*> s;
        // s.push_back(root->val);
        s.push(root);
        while(!s.empty())
        {
            Node *cur = s.top();
            s.pop();
            soln.push_back(cur->val);
            for(Node *next:cur->children)
            {
                s.push(next);
            }
        }
        reverse(soln.begin(),soln.end());
        return soln;
    }
};