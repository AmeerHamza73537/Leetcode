class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> s1;
        unordered_map<int,int> s2;
        int count = 0;
        int count1 = 0;
        vector<int> ans;
        for(int num : nums1) s1[num]++;
        for(int num : nums2) s2[num]++;
        for(auto [key,value] : s2){
            if(s1.count(key)){
                count += value;
            }
        }
        for(auto [key,value] : s1){
            if(s2.count(key)){
                count1 += value;
            }
        }
        ans.push_back(count1);
        ans.push_back(count);
        return ans;
    }
};