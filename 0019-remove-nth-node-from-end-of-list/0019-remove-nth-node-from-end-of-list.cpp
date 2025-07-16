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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr) return head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        for(int i = 0; i < n; i++) fast = fast->next;
        while(fast->next != nullptr){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* prev = slow;
        ListNode* temp = slow->next;
        slow = slow->next->next;
        prev->next = slow;
        
        // slow = slow->next;
        delete temp;
        return dummy->next;
    }
};