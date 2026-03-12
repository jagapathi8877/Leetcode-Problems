class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char,int>mp;
        for(auto i : s) mp[i]++;
        int ans = 0 ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(mp[s[i]] < 3) ans += mp[s[i]] ;
            else 
            {
                if(mp[s[i]] & 1) ans += 1 ;
                else ans += 2 ;
            }
            mp[s[i]] = 0; 
        }
        return ans ;
    }
};