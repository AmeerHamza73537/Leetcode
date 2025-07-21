class Solution {
public:
    int calPoints(vector<string>& operations) {
        int sum = 0;
        vector<int> v;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C"){
                v.pop_back();
            }
            else if(operations[i] == "D"){
                v.push_back(2 * v.back());
            }
            else if(operations[i] == "+"){
                int temp = v[v.size() - 1] + v[v.size() - 2];
                v.push_back(temp);
            }
            else{
                v.push_back(stoi(operations[i]));
            }
        }
        for(int num : v){
            sum += num;
        }
        return sum;
    }
};