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

    ListNode *reverseLL(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *temp;

        while(cur)
        {
            temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
       
        ListNode *dummy = new ListNode(-1);
        dummy->next = reverseLL(head);
    
        head = dummy;
        ListNode *prev = NULL;
        ListNode *cur = head;
        for(int i=0;i<n;i++)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;

        return reverseLL(head->next);

    }
};