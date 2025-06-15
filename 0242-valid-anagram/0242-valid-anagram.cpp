class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        unordered_set<string> ans1;
        ans1.insert(s);
        unordered_set<string> ans2;
        ans2.insert(t);
        return ans1 == ans2;
    }
};