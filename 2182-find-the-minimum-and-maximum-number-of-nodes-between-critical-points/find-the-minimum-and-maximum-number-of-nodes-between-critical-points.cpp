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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head ||!head->next || !head->next->next) 
            return {-1, -1};
        ListNode* prev=  head;
        ListNode*cur = head->next;
        int index =1;
        vector<int> sol;
        while(cur->next!=nullptr)
        {
            int nex = cur->next->val;
            if((cur->val<prev->val && cur->val<nex) || (cur->val>prev->val && cur->val>nex))
                sol.push_back(index);
            index++;
            prev = cur;
            cur = cur->next; 
        }
        for(int i:sol)
            cout<<i<<" ";
        int n = sol.size()-1;
        if(n<=0)
            return {-1,-1};
        int mino = INT_MAX;
        for(int i=0;i<n;i++)
        {
            mino = min(mino,sol[i+1]-sol[i]);
        }
        return {mino,sol[n]-sol[0]};
    }
};