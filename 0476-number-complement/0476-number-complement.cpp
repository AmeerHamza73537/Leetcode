class Solution {
public:
    int findComplement(int num) {
        int complement = 0;
        bool foundNonZeroBit = false; // Flag to check when the first non-zero bit is found
        for (int i = 30; i >= 0; --i) {
            int currentBit = (num & (1 << i)); // Check if the ith bit is set or not
          
            // Skip leading zeroes and look for the first 1
            if (!foundNonZeroBit && currentBit == 0) continue;
          
            // After the first non-zero bit is found, set foundNonZeroBit to true
            foundNonZeroBit = true;
          
            // If the current bit is 0, set the corresponding bit in complement
            if (currentBit == 0) {
                complement |= (1 << i);
            }
            // If the current bit is 1, it remains 0 in the complement,
            // so no action is needed since complement is initialized to 0
        }
        return complement;
    }
};