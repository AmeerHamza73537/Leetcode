// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int sum = 0;
//         vector<vector<int>> sht;
//         set<vector<int>> ok;
//         // for(int i = 0; i < nums.size(); i++){
//         //     if(i > 0 && nums[i] == nums[i-1]) continue;
//         //     for(int j = i+1; j < nums.size(); j++){
//         //         // if(j > 0 && nums[j] == nums[j-1]) continue;
//         //         for(int k = j+1; k < nums.size(); k++){  
//         //             // if(k > 0 && nums[k] == nums[k-1]) continue;
//         //             sum = nums[i] + nums[j] + nums[k];
//         //                 if(sum == 0){
//         //                 ok.insert({nums[i], nums[j], nums[k]});
//         //             }
//         //         }
//         //     }
//         // }
//         // for(auto i : ok){
//         //     sht.push_back(i);
//         // }
//         for(int i = 0; i < nums.size(); i++){
//             int target = -nums[i];
//             int j = i+1, k = nums.size()-1;
//             if(i > 0 && nums[i] == nums[i-1]) continue;
//             while(j < k){
//                 if(nums[j] + nums[k] == target){
//                     ok.insert({nums[i], nums[j], nums[k]});
//                     j++;
//                     k--;
//                     while (j < k && nums[j] == nums[j - 1]) j++;
//                     while (j < k && nums[k] == nums[k + 1]) k--;
//                 }
//                 else if (nums[j] + nums[k] < target) {
//                     j++; // Move left pointer to the right to increase the sum
//                 }
//                 else{
//                     j++;
//                 }
//             }
//         }
//         for(auto i : ok){
//             sht.push_back(i);
//         }
//         return sht;
//     }
// };
// // class Solution {
// // public:
// //     vector<vector<int>> threeSum(vector<int>& nums) {
// //         sort(nums.begin(), nums.end());
// //         vector<vector<int>> sht; // Stores unique triplets
// //         int n = nums.size();

// //         for (int i = 0; i < n; i++) {
// //             // Skip duplicate values for i
// //             if (i > 0 && nums[i] == nums[i - 1]) continue;

// //             for (int j = i + 1; j < n; j++) {
// //                 // Skip duplicate values for j
// //                 if (j > i + 1 && nums[j] == nums[j - 1]) continue;

// //                 for (int k = j + 1; k < n; k++) {
// //                     // Skip duplicate values for k
// //                     if (k > j + 1 && nums[k] == nums[k - 1]) continue;

// //                     if (nums[i] + nums[j] + nums[k] == 0) {
// //                         sht.push_back({nums[i], nums[j], nums[k]});
// //                     }
// //                 }
// //             }
// //         }
// //         return sht;
// //     }
// // };
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Sort the array
        vector<vector<int>> sht; // Result to store unique triplets
        set<vector<int>> ok; // Set to avoid duplicate triplets
        
        for (int i = 0; i < nums.size(); i++) {
            int target = -nums[i]; // We need nums[j] + nums[k] to be the negative of nums[i]
            int j = i + 1, k = nums.size() - 1;
            
            // Skip duplicate values for i
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            while (j < k) {
                if (nums[j] + nums[k] == target) { // Found a triplet
                    ok.insert({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    
                    // Skip duplicate values for j and k
                    while (j < k && nums[j] == nums[j - 1]) j++;  // Skip duplicate for j
                    while (j < k && nums[k] == nums[k + 1]) k--;  // Skip duplicate for k
                }
                else if (nums[j] + nums[k] < target) {
                    j++; // Move left pointer to the right to increase the sum
                }
                else {
                    k--; // Move right pointer to the left to decrease the sum
                }
            }
        }
        
        // Convert the set of triplets into a vector
        for (auto triplet : ok) {
            sht.push_back(triplet);
        }
        
        return sht;
    }
};
