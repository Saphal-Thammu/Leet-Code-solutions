/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next ==  NULL) return head;
        
        // ListNode* prev=new ListNode(NULL);
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* fast=head->next;
        // prev->next=curr;
        
        while(fast != NULL){
            curr->next=prev;
            prev=curr;
            curr=fast;
            fast=curr->next;
        }
        
        curr->next=prev;
        
        return curr;
        
    }
};
