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

// https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* dummy=new ListNode(0); //new node making as this -> 0|NULL 
        dummy->next=head; // 0|head
        int l=0;
        ListNode* first=head;
        while(first) {
            l++;
            first=first->next;
        }
        l-=n;
        first=dummy;
        while(l>0) {
            l--;
            first=first->next;
        }
        first->next=first->next->next; 
        return dummy->next;
    }
};
