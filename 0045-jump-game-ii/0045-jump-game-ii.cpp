class Solution {
public:
    int jump(vector<int>& nums) {
        int jump = 0, end = 0, far = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            far = max(far, i + nums[i]);
            if(i == end){
                end = far;
                jump++;
                if(end > nums.size() - 1){
                    break;
                }
            }
            
        }

        return jump;
    }
};