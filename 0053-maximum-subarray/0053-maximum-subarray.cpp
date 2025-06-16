class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0, minSum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            ans += nums[i];
            minSum = max(ans,minSum);
            if(ans < 0) ans = 0;
        }
        return minSum;
    }
};