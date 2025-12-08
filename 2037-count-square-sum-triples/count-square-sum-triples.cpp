class Solution {
public:
    int countTriples(int n) {
        int cnt = 0 ;
        for(int i = 1 ; i <= n ; i++)
        {
            for(int j = 1 ; j <= n ; j++)
            {
                int x = sqrt(i*i + j*j) ;
                if(x*x == i*i + j*j) if(x <= n) cnt++;
            }
        }
        return cnt ;
    }
};