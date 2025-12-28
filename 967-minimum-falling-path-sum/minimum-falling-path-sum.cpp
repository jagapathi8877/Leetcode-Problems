class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size() ; 
        for(int i= 1 ; i < n ; i++)
        {
            for(int j = 0 ; j < matrix[0].size() ; j++)
            {
                int up = matrix[i-1][j] ;
                int left = INT_MAX , right = INT_MAX ;
                if(j > 0) left = matrix[i-1][j-1] ;
                if(j < n-1) right = matrix[i-1][j+1];
                matrix[i][j] += min(up , min(left , right));
            }
        }
        return *min_element(matrix[n-1].begin() , matrix[n-1].end()) ;
    }
};