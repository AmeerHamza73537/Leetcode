class Solution {
public:
    int magicalString(int n) {
        int count = 0;
        int i = 2;
        vector<int> magic = {1,2,2};
        while(magic.size() < n){
            int ok = magic[i];
            int nums = (magic.back() == 1) ? 2 : 1;
            for(int i = 0; i < ok; i++){
                magic.push_back(nums);
            }
            i++;
        }
        for(int i = 0; i < n; i++){
            if(magic[i] == 1) count++;
        }
        return count;
    }
};