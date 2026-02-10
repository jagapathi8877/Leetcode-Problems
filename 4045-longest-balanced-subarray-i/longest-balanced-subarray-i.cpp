class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size() , maxi = 0;
        for(int i = 0 ; i < n ; i++)
        {
            unordered_set<int>ev,od ;
            for(int j = i ; j < n ; j++)
            {
                if(nums[j] & 1) od.insert(nums[j]);
                else ev.insert(nums[j]);
                if(od.size() == ev.size()) maxi = max(maxi , j - i + 1);
            }
        }
        return maxi ;
    }
};