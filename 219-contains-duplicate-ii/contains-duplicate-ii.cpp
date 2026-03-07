class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0 ;
        unordered_map<int,int>mp ;
        for(int j = 0 ; j < nums.size() ; j++)
        {
            if(mp.count(nums[j])) if(abs(j - mp[nums[j]]) <= k) return 1 ;
            mp[nums[j]] = j ;
        }
        return 0 ;
    }
};