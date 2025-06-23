class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0;
        int check = 0;
        unordered_set<int> dup;
        for(int j = 0; j < nums.size(); j++){
            if(dup.count(nums[j])){
                return true;
            }
            dup.insert(nums[j]);
            if(j >= k){
                dup.erase(nums[j - k]);
            }
        }

        return false;
    }
};