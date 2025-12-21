class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp ;
        for(int i : nums)mp[i]++;
        int dup = 0 ;
        for(auto i : mp) if(i.second > 1) dup++;
        if(dup == 0) return 0 ;
        int i = 0 , ans = 0 ;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            mp[nums[i]]--;
            if(mp[nums[i]] == 1) dup--;
            if((i+1)%3 == 0)
            {
               ans++;
               if(dup == 0) return ans;
            }
        }
        return ans+1;
    }
};