class Solution {
public:
    int maxArea(vector<int>& arr) {
       int i = 0 , j = arr.size() -1  ;
       int area = 0 , maxi = 0 ;
       while(i < j)
       {
            area = min(arr[i] , arr[j]) * (j - i) ;
            maxi = max(area , maxi) ;
            if(arr[i] < arr[j]) i++;
            else j-- ;
       }
       return maxi ;
    }
};