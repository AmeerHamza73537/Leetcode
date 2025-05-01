class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0, neg = 0;
        // int low = 0, high = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                continue;
            }
            else if(nums[i] > 0){
                pos++;
                // low++;
            }
            else{
                neg++;
                // low++;
            }
        }
        return (pos > neg) ? pos : neg;
    }
};