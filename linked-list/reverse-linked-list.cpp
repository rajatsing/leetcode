/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
//https://leetcode.com/problems/reverse-linked-list/submissions/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)//exit condition
            return head;
        ListNode *p=head,*c=head,*f=head->next;
        
        head->next=NULL;
        while(f!=NULL)
        {
            c=f;
            f=f->next;
            c->next=p;
            p=c;
        }
        head=c;
        return head;
    }
};
