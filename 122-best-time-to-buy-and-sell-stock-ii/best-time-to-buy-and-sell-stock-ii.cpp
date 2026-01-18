class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxi = 0 ;
        for(int i  = 0 ; i < arr.size() - 1 ; i++)
        {
            if(arr[i] < arr[i+1]) maxi += arr[i+1] - arr[i] ;
        }
        return maxi ;
    }
};