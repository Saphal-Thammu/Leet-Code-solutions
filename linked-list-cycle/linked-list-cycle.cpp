/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        ListNode* slow = head; 
        ListNode* fast = head;
        bool flag = false;    
​
        while (fast != NULL && fast->next != NULL ) {
            slow = slow->next;
            fast = fast->next->next;
      /* If slow_p and fast_p meet at 
                some point then
               there is a loop */
            if (slow == fast) {
                flag = true; 
                
                break;
                /* Return true to indicate that loop is found */
​
            }
        }
        
        if(!flag) return false;    
​
        return true;    
        
        
 
    /* Return false to indeciate that ther is no loop*/
    // return false;
        
    }
};
