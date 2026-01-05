class Solution {
public:
    long long divisor(int n)
    {
        long long sum = 0;
        int cnt = 0;
        for(int i = 1 ; i <= n ; i++) 
        {
            if(cnt > 4) return 0 ;
            else if(n%i == 0 ) 
            {
                sum += i;
                cnt+=1;
            }
        }
        if(cnt == 4) return sum;
        else return 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        long long ans = 0 ;
        for(int i : nums) ans += divisor(i) ;
        return ans;
    }
};