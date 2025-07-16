/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A = headA;
        ListNode* B = headB;
        int countA = 0, countB = 0;
        while(A != nullptr){
            countA++;
            A = A->next;
        }
        while(B != nullptr){
            countB++;
            B = B->next;
        }
        A = headA;
        B = headB;
        int diff = abs(countA - countB);
        if(countA > countB){
            while(diff--) A = A->next;
        }else{
            while(diff--) B= B->next;
        }
        
        // while((A != nullptr && A->next != nullptr) || (B != nullptr && B->next != nullptr)){
        //     if(A == B) return A;
        //     A = A->next;
        //     B = B->next;
        // }
        while(A != B){
            // if(A != nullptr && A->next != nullptr) A = headB;
            // if(B != nullptr && B->next != nullptr) B = headA;
            A = A->next;
            // if(A==B) return A;
            B = B->next;
            
        }
        return A;
    }
};