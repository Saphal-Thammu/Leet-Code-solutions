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
    void reorderList(ListNode* head) {
        
        if(head == NULL || head->next == NULL) return;
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        fast=reverse(slow->next);
        slow->next=NULL;
        
        slow = head;
        ListNode* temp;
        
        while(fast != NULL){
            temp=slow->next;
            slow->next=fast;
            fast=fast->next;
            slow->next->next=temp;
            slow=temp;
            
        }
        
        
        
    }
private:
    ListNode* reverse(ListNode* reverse){
        ListNode* prev=NULL;
        ListNode* curr=reverse;
        ListNode* fast=curr->next;
        
        while(fast!=NULL){
            curr->next=prev;
            prev=curr;
            curr=fast;
            fast=fast->next;
        }
