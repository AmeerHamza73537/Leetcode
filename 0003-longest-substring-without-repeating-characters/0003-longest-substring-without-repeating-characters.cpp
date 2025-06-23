class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> a;
        int maxCount = 0, left = 0;
        for(int right = 0; right < s.size(); right++){
            while(a.count(s[right])){
                a.erase(s[left]);
                left++;
            }
            a.insert(s[right]);
            maxCount = max(maxCount, right - left + 1);
        }
        return maxCount;
    }
};