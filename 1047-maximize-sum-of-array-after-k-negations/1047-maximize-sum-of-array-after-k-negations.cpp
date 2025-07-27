class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0 && k > 0){
                nums[i] = -nums[i];
                k--;
            }
            

            // if(k == 0) break;
            
        }
        if(k % 2 == 1){
            sort(nums.begin(), nums.end());
            nums[0] = -nums[0];
        }
        for(int num : nums){
            sum += num;
        }
        return sum;
    }
};