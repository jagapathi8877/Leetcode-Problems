class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        sort(arr.begin() , arr.end() , greater<int>()) ;
        int cnt = 0 ; 
        long long ans = 0 ;
        for(int i = 0 ;i < arr.size() ; i++)
        {
            if(cnt < k) 
            {
                if(arr[i] - cnt > 0) ans += (arr[i] - cnt);
                else break ;
            }
            else return ans ;
            cnt++;
        }
        return ans ;
    }
};