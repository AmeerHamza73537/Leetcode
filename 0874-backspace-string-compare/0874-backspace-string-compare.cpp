class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1,t1;
        int left = 0, right = 0;
        
        while(left < s.size()){
            if(s[left] != '#') s1 += s[left];
            else if(!s1.empty()) s1.pop_back();
            left++;
        }
        while(right < t.size()){
            if(t[right] != '#') t1 += t[right];
            else if(!t1.empty()) t1.pop_back();
            right++;
        }
        
        s1.erase(remove(s1.begin(),s1.end(),'#'),s1.end());
        t1.erase(remove(t1.begin(),t1.end(),'#'),t1.end());
        return (s1 == t1) ? true : false;
    }
};