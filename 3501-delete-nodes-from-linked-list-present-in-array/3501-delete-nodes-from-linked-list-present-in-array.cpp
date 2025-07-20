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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set s(nums.begin(), nums.end());
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        while(prev->next){
            if(s.count(prev->next->val)){
                prev->next = prev->next->next;
            }else{
                prev = prev->next;
            }
        }
        return dummy->next;
        
        // ListNode* curr = head;
        // ListNode* prev = nullptr;
        // for(int num : nums){
        //     while(curr->val == num){
        //         ListNode* tmp = curr;
        //         curr = curr->next;
        //         delete tmp;
        //     }
            // if(num == curr->val){
            //     ListNode* temp = curr;
            //     curr = temp->next;
            // }
        // }
        
        // int left = 0;
        // while(curr != nullptr && left < nums.size()){
        //     if(curr->val == nums[left]){
        //         ListNode* temp = curr;
        //         curr = temp->next;
        //         prev = temp->next;
        //         delete temp;
        //         left++;
        //     }
        //     else curr = curr->next;
        // }
        // return head;
    }
};