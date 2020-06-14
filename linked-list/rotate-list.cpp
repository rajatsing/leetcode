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
//https://leetcode.com/problems/rotate-list/
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        
        ListNode* tail=head;
        int n=1;
        while(tail->next!=NULL) {
            tail=tail->next;
            n++;
        }
        
        tail->next=head;
        
        k%=n;
        while(--n>=k) {
            n--;
            tail=tail->next;
        }
        
        head=tail->next;
        tail->next=NULL;
        
        return head;
    }
};
