class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> ans;
        int low = 0;
        int n = s.length();
        int high = n;
        for(int i = 0; i < n; i++){
            if(s[i] == 'I'){
                ans.push_back(low);
                low++;
            }
            else{
                ans.push_back(high);
                high--;
            }
        }
        ans.push_back(low);
        return ans;
    }
};