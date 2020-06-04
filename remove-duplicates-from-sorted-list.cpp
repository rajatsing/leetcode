/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
     ListNode *duplicate=head; 
        while(duplicate!=NULL && duplicate->next!=NULL)
        {
            if(duplicate->next->val==duplicate->val)
            {
                duplicate->next=duplicate->next->next;
            }
            else
            {
                duplicate=duplicate->next;
            }
        }
        return head;
    }
};
