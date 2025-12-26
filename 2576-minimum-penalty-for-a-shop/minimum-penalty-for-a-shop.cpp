class Solution {
public:
    int bestClosingTime(string arr) {
        int n = arr.size();
        vector<int>prefix(n+1) , suffix(n+1);
        int x = 0 , y = 0 ;
        for(int i = 0 ; i < n ; i++)
        {
            if(arr[i] == 'N') x++;
            prefix[i+1] = x ;
            if(arr[n-i-1] == 'Y') y++;
            suffix[n-i-1] = y ;
        }
        int mini = INT_MAX;
        int idx = 0 ;
        int y_undha = 0 ;
        for(int i = 0 ; i <= n ; i++)
        {
           if(prefix[i] + suffix[i] < mini)
           {
                mini = prefix[i] + suffix[i] ;
                idx = i ;
           }
        }
        return idx;
    }
};