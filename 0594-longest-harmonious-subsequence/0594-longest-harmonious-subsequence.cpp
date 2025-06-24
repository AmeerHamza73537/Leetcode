class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> harm;
        int maxCount = 0;
        for(auto num : nums){
            harm[num]++;
        }
        for(auto [num, count] : harm){
            if(harm.count(num + 1)){
                maxCount = max(maxCount, count + harm[num + 1]);
            }
        }
        return maxCount;
    }
};