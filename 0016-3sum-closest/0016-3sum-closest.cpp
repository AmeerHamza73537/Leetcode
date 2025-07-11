class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = nums[0] + nums[1] + nums[2]; // initialize with first triplet
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; i++) {
            int left = i + 1;
            int right = nums.size() - 1;

            while(left < right) {
                int currSum = nums[i] + nums[left] + nums[right];

                if(abs(currSum - target) < abs(closest - target)) {
                    closest = currSum;
                }

                if(currSum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }

        return closest;
    }
};
