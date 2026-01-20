class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int MOD = 1e9 + 7 ;
        long long sum = 0 , ev = 1, od = 0 ; 
        int ans = 0 ;
        for(int i = 0 ; i < arr.size(); i++)
        {
            sum += arr[i];
            if(sum % 2 == 0)
            {
                ans = (ans + od)%MOD ;
                ev++;
            }
            else if(sum%2 != 0)
            {
                ans = (ans + ev)%MOD;
                od++;
            }  
        }
        return ans ;
    }
};