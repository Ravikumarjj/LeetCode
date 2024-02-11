#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
    vector<int> col_max(n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            col_max[j] = max(col_max[j], matrix[i][j]);
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = col_max[j];
            }
        }
    }
    return matrix;
        
    }
};