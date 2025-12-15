class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        long long ans = 0 ;
        for(int i = 0 ; i < arr.size() ; i++) arr[i] = abs(arr[i]) ;
        sort(arr.begin() , arr.end()) ;
        for(int i = arr.size()/2 ; i < arr.size() ; i++) ans += (arr[i]*arr[i]);
        for(int i = 0 ; i < arr.size()/2 ; i++) ans -= (arr[i]*arr[i]) ;
        return ans ;
    }
};

