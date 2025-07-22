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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        vector<int> v;
        int ans = 0;
        while(temp != nullptr){
            v.push_back(temp->val);
            temp = temp->next;
        }
        for(int v1 : v){
            ans = (ans << 1) | v1;
        }
        return ans;
    }
};