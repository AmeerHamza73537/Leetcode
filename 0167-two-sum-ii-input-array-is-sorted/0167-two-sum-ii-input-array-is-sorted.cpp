class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ok;
        int i = 0, j = numbers.size() - 1;
        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target){
                i++,j++;
                ok.push_back(i);
                ok.push_back(j);
                return ok;
            }
            else if(sum < target){
                i++;
            }
            else{
                j--;
            }
        }        

        return ok;
    }
};