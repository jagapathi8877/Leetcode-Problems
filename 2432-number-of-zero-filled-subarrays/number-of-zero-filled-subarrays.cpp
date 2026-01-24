class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int n = nums.size() ;
        long long ans = 0 , cnt = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i] == 0)
            {
                cnt+=1;
                ans += cnt ;
            }
            else cnt = 0 ;
        }
        return ans ;
    }
};