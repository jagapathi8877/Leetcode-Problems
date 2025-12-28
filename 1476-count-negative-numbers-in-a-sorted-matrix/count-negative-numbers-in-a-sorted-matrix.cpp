class Solution {
public:
    int countNegatives(vector<vector<int>>& nums) {
        int cnt = 0 ;
        int n = nums.size() , m = nums[0].size() ;
        int i = 0 , j =  m- 1 ;
        while(i < n && j >= 0)
        {
            if(nums[i][j] < 0) 
            {
                cnt+= (n-i);
                j--;
            }
            else i++;
        }
        return cnt;
    }
};