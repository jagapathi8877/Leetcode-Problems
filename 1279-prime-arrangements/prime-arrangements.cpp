class Solution {
public:
    int isPrime(int n)
    {
        vector<int>prime(n+1 , 1) ;
        prime[0] = 0 , prime[1] = 0 ;
        for(int i = 2 ; i*i <= n ; i++)
        {
            if(prime[i]) for(int j = i*i ; j <= n ; j+=i)  prime[j] = 0 ; 
        }
        int cnt = 0 ;
        for(auto i : prime) if(i == 1) cnt++;
        return cnt ;
    }
    int MOD = 1e9 + 7 ;
    long long fact(long long i)
    {
        if(i <= 1) return 1 ;
        return (i  * (fact(i-1)))%MOD; 
    }
    int numPrimeArrangements(int n) {
        long long a = isPrime(n) ;
        long long b = n - a ;
        cout << a << " " << b; 
        return (fact(a) * fact(b))%MOD;
    }
};