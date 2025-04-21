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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return true;
        bool ans = true;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != nullptr && fast->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* prev = NULL;
        ListNode* curr = slow;
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        ListNode* first = head;
        ListNode* second = prev;

        while(second != nullptr){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second->next;
        }

        return ans;
    }
};