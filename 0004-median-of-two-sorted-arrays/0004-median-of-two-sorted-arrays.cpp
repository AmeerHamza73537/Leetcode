class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        nums1.insert(nums1.begin(), nums2.begin(), nums2.end());
        sort(nums1.begin(), nums1.end());
        int size = nums1.size();
        if(size %2 != 0){
            int ind = size / 2;
            ans = nums1[ind];
        }else{
            int ind1 = size / 2;
            int ind2 = (size / 2) - 1;
            ans = (nums1[ind1] + nums1[ind2]) / 2.0;
        }
        return ans;
    }
};