class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int maxAlt = 0;
        for(auto i : gain){
            altitude += i;
            maxAlt = max(maxAlt, altitude);
        }
        return maxAlt;
    }
};