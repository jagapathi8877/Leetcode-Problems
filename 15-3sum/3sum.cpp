class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        vector<vector<int>>ans ;
        for(int i = 0 ; i < arr.size() - 1 ; i++)
        {
            if(i > 0 && arr[i] == arr[i-1]) continue ;
            int left = i + 1 , right = arr.size() - 1 ;
            while(left < right)
            {
                int sum = arr[i] + arr[left] + arr[right] ;
                if(sum == 0)
                {
                    ans.push_back({arr[i] , arr[left] , arr[right]});
                    while(left < right && arr[left] == arr[left+1]) left++;
                    while(left < right && arr[right] == arr[right-1]) right--;
                    left++;
                    right--;
                }
                else if(sum > 0) right--;
                else left++;
            }
        }
        return ans ;
    }
};