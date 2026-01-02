class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0 ;
        int sum = 0 , mini = INT_MAX ;
        for(int j = 0 ; j < nums.size() ; j++)
        {
            sum += nums[j] ;
            while(sum >= target)
            {
                mini = min(mini , j-i+1);
                sum-=nums[i++];
            }
        }
        return mini == INT_MAX ? 0 : mini ;
    }
};