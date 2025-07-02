class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> m;
        for(int num : arr) m[num]++;
        unordered_set<int> check;
        for(auto [key,value] : m){
            if(check.count(value)) return false;
            else check.insert(value);
        }
        return true;
    }
};