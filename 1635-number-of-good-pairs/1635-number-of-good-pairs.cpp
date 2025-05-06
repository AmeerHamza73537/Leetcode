class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairsCount = 0; // Initialize a count for good pairs
        int counts[101] = {0};  // Initialize an array to store the frequency of each number, assuming numbers fall within 1 to 100
      
        // Iterate over the input vector 'nums'
        for (int num : nums) {
            // For each number 'num', increment the good pairs count by the number of times 'num' has already appeared
            goodPairsCount += counts[num];
          
            // Increment the count for the current number in 'counts' array
            counts[num]++;
        }
      
        // Return the total count of good pairs
        return goodPairsCount;
    }
};