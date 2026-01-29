class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int,int>mp;
        int ans = 0 ;
        for(int i : nums) mp[i]++;
        for(auto i : mp)
        {
            int res = i.second ;
            if(res <= 1) return -1;
            if(res%3 == 0) ans += res/3 ;
            else ans += (res/3) + 1;
        }
        return ans ;
    }
};