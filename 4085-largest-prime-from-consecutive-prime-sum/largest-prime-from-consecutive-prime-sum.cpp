class Solution {
public:
    
    int largestPrime(int n) {
        if(n == 1) return 0 ;
        vector<bool>prime(n+1 , true) ;
        prime[0] = false ;
        prime[1] = false ;
        for(int i = 2 ; i*i <= n ; i++)
            {
                if(prime[i])
                {
                    for(int j = i*i ; j <= n ; j+=i) prime[j] = false ;
                }
            }
        int sum = 0 ;
        int fin = 2 ;
        for(int i = 2 ; i <= n ; i++)
            {
                if(prime[i]) 
                {
                    sum += i ;
                    if(sum <= n && prime[sum]) fin = sum ;
                    else if(sum > n) break ;
                }
            }
        return fin;
    }
    
};