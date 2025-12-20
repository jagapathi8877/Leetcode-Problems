class Solution {
public:
    int cnt = 0 ;
    int minDeletionSize(vector<string>& s) {
        int m = s.size() , n = s[0].size();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m - 1 ; j++)
            {
                if(s[j][i] > s[j+1][i]) {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};