class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        vector<vector<int>> v(column, vector<int>(row));
        for(int i = 0; i < column; i++) {
            for(int j = 0; j < row; j++) {
                v[i][j] = matrix[j][i];
            }
        }


        return v;
    }
};