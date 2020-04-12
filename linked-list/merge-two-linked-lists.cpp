/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
        //https://leetcode.com/problems/merge-two-sorted-lists/
        //took help from youtube
        //not creating any new list, just changing the pointers
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode dummy(100);//constructor calling and adding 100 as "dummy/fake value"
        ListNode* last=&dummy;//copy the entire linked-list, last means that it will traverse to the last value
        while(l1!=NULL && l2!=NULL) 
        {
            if(l1->val<=l2->val)
            {
              last->next=l1;
                last=l1;
              l1 = l1->next;
            }
            else {
                last->next=l2;
                last=l2;
                l2=l2->next;
            }
        }
        if(l1!=NULL)
        {
            last->next=l1;
        }
        if(l2!=NULL)
        {
            last->next=l2;
        }
        return dummy.next;
    }
};
