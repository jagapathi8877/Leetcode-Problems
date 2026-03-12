class Solution {
public:
    long long hour(vector<int>arr , int h )
    {
        long long cnt = 0 ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            cnt += ceil(arr[i]/(double)h);
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& arr, int h) {
        int low = 1 ;
        int high = *max_element(arr.begin() , arr.end());
        while(low <= high)
        {
            int mid = (low + high)/ 2 ;
            if(hour(arr , mid) <= h) high = mid - 1 ;
            else low = mid + 1 ;
        }
        return low;
    }
};