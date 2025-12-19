class Solution {
public:
    int clumsy(int n) {
        vector<int>arr ;
        arr.push_back(n);
        n-=1;
        int fin = 0 , first = 0;
        while(n)
        {
            if(fin%4 == 0) 
            {
                int x = arr.back() * n ;
                arr.pop_back() ;
                arr.push_back(x);
            }
            else if(fin%4 == 1)
            {
                int x = arr.back() / n ;
                arr.pop_back() ;
                arr.push_back(x); 
            }
            else if(fin%4 == 2) arr.push_back(n) ;
            else if(fin%4 == 3 ) arr.push_back(-n);
            cout << arr.back() << " " ;
            n-=1;
            fin+=1;
        }
        int ans = 0 ;
       for(int i = 0 ; i < arr.size() ; i++) ans += arr[i] ;
       return ans ;
    
    }
};