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
    ListNode *midElement(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next!=nullptr && fast->next->next!=nullptr)
        {
            fast = fast->next->next;
            slow = slow->next;
        }

        return slow;
    }

    ListNode *revList(ListNode *head)
    {
        ListNode *cur = head;
        ListNode *prev = NULL;
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

    void reorderList(ListNode* head) {
        ListNode *mid;
        mid = midElement(head);
        ListNode *right;
        right = mid->next;
        mid->next = NULL;
        right = revList(right); //reversed right side
        ListNode *left = head;

        //we have head and right;
        ListNode *dummy = new ListNode(-1);
        ListNode *cur = dummy;
        
        while(left  && right)
        {
            cur->next = left;
            left = left->next;
            cur = cur->next;

            cur->next = right;
            right=right->next;
            cur = cur->next;
        }

        if(left)
            cur->next = left;
        // return dummy->next;
        delete dummy;

    }
};