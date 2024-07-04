/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    void traverse(ListNode* head,vector<int>& sol,int& tsum)
    {
        if(!head)
            return;
        if(head->val!=0)
            tsum+=head->val;
        else
        {
            sol.push_back(tsum);
            tsum = 0;
        }
        traverse(head->next,sol,tsum);
    }

    void addNode(ListNode*& head, ListNode*& tail, int n) 
    {
        ListNode* newNode = new ListNode(n);
        if (head == nullptr) 
        {   head=newNode;
            tail=newNode;
        } else 
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    ListNode* mergeNodes(ListNode* head) {
        int tsum = 0;
        vector<int> sol;
        ListNode *newHead = nullptr,*tail=nullptr;
        traverse(head,sol,tsum);
        for(int i=1;i<sol.size();i++)
        {
            addNode(newHead,tail,sol[i]);
        }
        
        return newHead;
    }
};

