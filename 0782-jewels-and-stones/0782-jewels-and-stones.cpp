class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> ss;
        for(char stone:stones){
            ss[stone]++;
        }
        int count = 0;
        for(int i = 0; i < jewels.size(); i++){
            if(ss.count(jewels[i])){
                count += ss[jewels[i]];
            }
        }
        return count;
    }
};