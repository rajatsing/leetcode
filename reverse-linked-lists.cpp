/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//https://leetcode.com/problems/middle-of-the-linked-list/
//took assistance
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *fast,*slow=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        cout << slow->val;
        return slow;
    }
};
