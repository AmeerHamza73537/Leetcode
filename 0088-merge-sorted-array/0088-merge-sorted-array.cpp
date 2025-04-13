class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Merge nums2 directly into nums1 using two-pointer approach
        int i = m - 1, j = n - 1, k = m + n - 1;

        // Merge in reverse order
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }

        // If any elements are left in nums2
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};
