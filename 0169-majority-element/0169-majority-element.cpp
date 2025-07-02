class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;  // Initially no candidate
        for (int num : nums) {
            if (count == 0) {
                candidate = num;  // Change candidate
            }
            if (num == candidate) {
                count++;  // Same element mila, count badhao
            } else {
                count--;  // Different element mila, count kam karo
            }
        }
        return candidate;  // Majority element return karo
    }
};