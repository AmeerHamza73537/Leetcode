class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int right = 1;
        for(int left = 0; left < nums.size(); left+=2){
            if(nums[left] % 2 != 0){
                while(nums[right] % 2 != 0){
                    right += 2;
                }
                swap(nums[left], nums[right]);
            }
        }
        return nums;
    }
};