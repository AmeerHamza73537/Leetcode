class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        int count = 0;
        ans.insert(ans.end(), heights.begin(), heights.end());
        sort(ans.begin(), ans.end());
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != ans[i]){
                count++;
            }
        }
        return count;
    }
};