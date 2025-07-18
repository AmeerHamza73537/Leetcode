class Solution {
public:
    bool vowel(char ch){
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
    }
    string reverseVowels(string s) {
        
        int left = 0, right = s.size() - 1;
        while(left < right){
           if(!vowel(s[left])){
            left++;
           }
           else if(!vowel(s[right])){
            right--;
           }
           else{
            swap(s[left], s[right]);
            left++;
            right--;
           }
        }
        return s;
    }
};