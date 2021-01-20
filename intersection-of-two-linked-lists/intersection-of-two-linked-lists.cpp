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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        int lenA = 0; // length of 1st path
        int lenB = 0; // length of second path
        int diff; // difference between the lengths
        
        ListNode* A=headA;
        ListNode* B=headB;
        
        while(A!=NULL){ // calc of length
            lenA+=1;
            A=A->next;
        }
        
        while(B!=NULL){  // calc of length 
            lenB+=1;
            B=B->next;
        }
        
        if(lenA > lenB){
            diff=lenA-lenB;
            while(diff != 0){
                headA = headA->next;
                diff--;
            }
        }else{
            diff = lenB-lenA;
            while(diff > 0){
                headB = headB->next;
                diff--;
            }
            
        }
        
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
        
        
        
        
        
        
        
        
    }
};
