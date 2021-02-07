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

// 'compare' function used to build up the
// priority queue
struct compare {
    bool operator()(
        struct ListNode* a, struct ListNode* b)
    {
        return a->val > b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         
        priority_queue<ListNode*,vector<ListNode*>,compare> pq;
        for(ListNode* head:lists){
            if(head!= NULL) pq.push(head);
        }
        
        ListNode* dummy= new ListNode(-1);
        ListNode* result=dummy;
        
        while(!pq.empty()){
            ListNode* min=pq.top();
            pq.pop();
            
            dummy->next=min;
            dummy=dummy->next;
            
            if(min->next !=  NULL){
                //here we are checking the min element which got popped out so first we move to the next node of that min in its list and add it in the priority  queue
                pq.push(min->next);
                
            }
        }
        
        return result->next;
        
    }
};