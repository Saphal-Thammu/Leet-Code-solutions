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
    struct ListNode *slow_p = head, *fast_p = head;
 
    while (slow_p && fast_p && fast_p->next) 
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
 
        /* If slow_p and fast_p meet at 
            some point then
           there is a loop */
        if (slow_p == fast_p) {
            
 
            /* Return true to indicate that loop is found */
            return true;
        }
    }
 
    /* Return false to indeciate that ther is no loop*/
    return false;
        
    }
};
