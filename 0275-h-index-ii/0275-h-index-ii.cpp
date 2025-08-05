class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans = 0;
        int n = citations.size();
        int left = 0, right = n - 1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            if(citations[mid] >=  n - mid) {
                ans = n - mid;
                right = mid - 1;
            }
            // else if(citations[mid] > n - mid) left = mid + 1;
            else left = mid + 1;
        }
        return ans;
    }
};