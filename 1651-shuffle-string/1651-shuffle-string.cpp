class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // if(is_sorted(indices.begin(), indices.end())) return s;
        string ans(s.size(), '0');
        for(int i = 0; i < indices.size(); i++){
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};