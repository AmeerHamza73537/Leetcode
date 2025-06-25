class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int index = 0;
        int maxNum = nums[nums.size() - 1];
        // Remove Duplicates
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[index]){
                index++;
                nums[index] = nums[i];
            }
        }
        nums.resize(index + 1);
        if(nums.size() < 3) return maxNum;
        return nums[nums.size() - 3]; 
    }
};