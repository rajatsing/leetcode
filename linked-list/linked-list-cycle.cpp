/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//https://leetcode.com/problems/linked-list-cycle/
class Solution {
public:
    bool hasCycle(ListNode *head) {
     ListNode *slow=head;
     ListNode *fast=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;//will increment first and then check as both are starting at head (KEEP THAT IN MIND)
            slow=slow->next;
            if(fast==slow)
                return true;
        }
        return false;
    }
};
