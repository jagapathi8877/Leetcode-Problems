class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long long ans = 0 ;
        int i = 0 ;
        int maxi = nums[0] ;
        for(int j = 1 ; j < nums.size() ; j++)
        {
            if(nums[j] > maxi)
            {
                ans += 1LL * (j-i) * nums[i];
                maxi = nums[j] ;
                i = j ;
            }
        }
        ans += (nums.size()-1-i) * 1LL*nums[i] ;
        return ans ;
    }
};