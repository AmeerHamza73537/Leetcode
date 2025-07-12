class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int first = 0, last = n-1;
        while(first < last){
            swap(matrix[first], matrix[last]);
            first++;
            last--;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};