class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m= matrix[0].size();
    vector<int> prev(m,0), curr(m,0);
    for(int j=0;j<m;j++){
        prev[j]=matrix[0][j];
    }
    for(int i = 1;i<n;i++){
        for(int j=0;j<m;j++){
            int u=matrix[i][j]+prev[j];
            int left = matrix[i][j];
            if(j-1>=0) left+=prev[j-1];
            else left+=(1e8);
            int right = matrix[i][j];
            if(j+1<m) right+=prev[j+1];
            else right+=(1e8);
            curr[j]=min(u, min(left, right));
        }
        prev = curr;
    }
    int mini = 1e8;
    for(int i=0;i<m;i++){
        mini = min(mini, prev[i]);
    }
    return mini;
    }
};