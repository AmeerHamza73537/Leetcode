class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(), heaters.end());
        int ans = 0;
        for(int i = 0; i <houses.size(); i++){
            int low = 0, high = heaters.size() - 1;
            int radius = INT_MAX;
            while(low<=high){
                int mid = low + (high - low) / 2;
                if(houses[i] == heaters[mid]){
                    radius = 0;
                    break;
                }
                else{
                    int diff = abs(houses[i] - heaters[mid]);
                    radius = min(diff, radius); 
                    if(houses[i]>heaters[mid]){
                        low = mid + 1;
                    }
                    else if(houses[i] < heaters[mid]){
                        high = mid - 1; 
                    }
                }
            }
            ans = max(ans, radius);
        }
        return ans;
    }
};