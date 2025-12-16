class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n + 1,true);
        if(n <= 2) return 0;
        prime[0] = prime[1] = false;
        for(int i = 2; i*i < n; i++)
        {
            if(prime[i] == true) for(int j = i*i; j < n; j+=i) prime[j] = false;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) if(prime[i] == true) cnt+=1;
        return cnt;
    }
};