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


    ListNode *merger(ListNode *l1,ListNode *l2)
    {
    
        ListNode *temp = new ListNode(-1);
        ListNode *cur = temp;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else{
                cur->next = l2;
                l2 = l2->next;
            }
            cur = cur->next;
        }
        if(l1) cur->next = l1;
        if(l2) cur->next = l2;

        return temp->next;
    }

    ListNode* sortList(ListNode* head) {

        if(!head || head->next == nullptr)
            return head;
        ListNode *fast = head;
        ListNode *slow = head;

        while(fast->next!=nullptr &&fast->next->next !=nullptr)
        {
            fast= fast->next->next;
            slow = slow->next;
        }
        fast = slow->next;
        slow->next = NULL;
        head = sortList(head);
        fast = sortList(fast);
        return merger(head,fast);

    }
};