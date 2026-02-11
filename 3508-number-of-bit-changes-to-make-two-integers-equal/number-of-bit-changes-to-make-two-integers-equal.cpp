class Solution {
public:
    int minChanges(int n, int k) {
        if( k > n) return -1;
        int x = n ^ k ;
        int width = log2(n) + 1 ;
        for(int i =  0 ; i < width ; i++)
        {
            if( (n & (1 << i)) == 0 && (k & (1 << i))) return -1;
            cout << (n & (1 << i)) << " " << (k & (1 << i)) << endl ;
        }
        int cnt = 0 ;
        while(x)
        {
            x = x & (x-1);
            cnt++;
        }
        return cnt;
    }
};