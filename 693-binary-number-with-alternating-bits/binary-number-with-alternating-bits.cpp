class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long x = n ^ (n >> 1);
        long long ans = x & (x + 1);
        if( ans  == 0) return 1 ;
        return 0 ;
    }
};