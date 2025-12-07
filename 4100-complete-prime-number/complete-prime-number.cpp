class Solution {
public:
    int prime(int n)
    {
        for(int i = 2 ; i*i <= n ; i++) if(n%i == 0 ) return 0 ;
        return 1 ;
    }
    bool completePrime(int num) {
        vector<int>arr ;
        while(num)
        {
            arr.push_back(num%10) ;
            num/=10 ;
        }
        reverse(arr.begin() , arr.end()) ;
        int n = 0 ; 
        for(int i = 0 ; i < arr.size() ; i++)
        {
            n = n*10+ arr[i] ;
            if(n == 1) return 0 ;
            if(prime(n) == 0) return 0 ;
        }
        int m = 0 , x = 1 ;
        for(int i = arr.size() -1 ; i >= 0 ; i--)
        {
            m = x * arr[i] + m;
            x*=10;
            if(m == 1) return 0 ;
            if(prime(m) == 0) return 0 ;
        }  
        return 1 ;
    }
};