class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i < s.size(); i++){
            if(s == goal){
                return true;
            }
            char ab = s[0];
            s.erase(0,1);
            s.push_back(ab);
        }
        return false;
    }
};