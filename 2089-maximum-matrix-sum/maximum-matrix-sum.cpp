class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int cnt = 0 ;
        long long sum = 0 ;
        int mini = INT_MAX , flag = 0;
        for(auto i :  matrix)
        {
            for(int j : i) 
            {
                sum += abs(j) ;
                if(j == 0) flag = 1;
                if(j < 0) cnt++;
                mini = min(mini , abs(j));
            }
        }
        if(cnt % 2 == 0 || flag) return sum ;
        return sum - 2 * mini ;
    }
};