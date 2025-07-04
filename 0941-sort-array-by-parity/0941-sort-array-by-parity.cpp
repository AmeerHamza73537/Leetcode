class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1;
        while(left < right){
            if(nums[left] % 2 != 0 && nums[right] % 2 == 0){
                swap(nums[left], nums[right]);
            }
            else if(nums[left] % 2 == 0){
                left++;
            }
            else{
                // left++;
                right--;
            }
        }
        return nums;
    }
};
