class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int arr1[256] = {0};
        int arr2[256] = {0};
        for(int i = 0; i < s.size(); i++){
            char first = s[i];
            char second = t[i];
            if(arr1[first] != arr2[second]){
                return false;
            }
            arr1[first] = arr2[second] = i + 1;
        }
        return true;
    }
};