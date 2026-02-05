class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& arr) {
        int n = arr.size() ;
        vector<int>ans(n);
        for(int i = 0 ; i < arr.size() ; i++)
        {
            int idx = arr[i]%n ;
            if(arr[i] > 0) ans[i] = arr[(i+idx)%n]; 
            else if(arr[i] < 0) ans[i] = arr[(n+i+idx)%n];
            else ans[i] = arr[i] ;
        }
        for(int i : ans) cout << i << " " ;
        return ans ;
    }
};