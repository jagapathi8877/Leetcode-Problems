class Solution {
public:
    long long getDescentPeriods(vector<int>& arr) {
        long long ans = 0 ;
        long long cnt = 0 ;
        ans += arr.size() ;
       for(int i = 0 ; i < arr.size() - 1 ; i++)
       {
            if((arr[i] - arr[i+1]) == 1 ) cnt+=1;
            else
            {
                ans += (cnt * (cnt+1)/2) ;
                cnt = 0 ;
            }
       }
       ans += (cnt * (cnt+1)/2);
       return ans ;
    }
    
};
