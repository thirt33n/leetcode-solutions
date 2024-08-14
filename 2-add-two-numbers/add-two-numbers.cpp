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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        if(!l2)
            return l1;
        ListNode *head,*temp;
        temp =head =  new ListNode(-1);
        int carry = 0;
        while(l1 || l2)
        {
            // int sum = l1->val+l2->val+carry;
            int sum = carry;
            if(l1)
            {
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum+=l2->val;
                l2 = l2->next;
            }
            carry = sum/10;
            sum%=10;

            ListNode *t = new ListNode(sum);
            temp->next = t;

            temp=temp->next;
        }
        if(carry)
            temp->next = new ListNode(1);
        return head->next;
    }
};