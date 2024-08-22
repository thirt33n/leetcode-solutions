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
    ListNode* swapPairs(ListNode* head) {
        ListNode *cur = head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        ListNode *temp;

        while(cur)
        {
            temp = cur->next;
            if(temp)
            {
                swap(temp->val,cur->val);
                cur = cur->next->next;
            }
            else
                break;
        }
        return dummy->next;
    }
};