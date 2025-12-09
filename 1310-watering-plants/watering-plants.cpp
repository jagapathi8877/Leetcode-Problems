class Solution {
public:
    int wateringPlants(vector<int>& arr, int c) {
        int cap = c  , cnt = 0 ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(cap >= arr[i]) 
            {
                cap -= arr[i] ;
                cnt++ ;
            }
            else 
            {
                cnt = cnt + (i*2) + 1 ;
                cap = c ;
                cap -=arr[i] ;
            }
        }
        return cnt ;
    }
};

