class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 ;
        if(s.size() == 1) return 1 ; 
        unordered_map<char,int>mp ;
        int maxi = 0 ;
        for(int j =0  ; j < s.size() ; j++)
        {
            mp[s[j]]++;
            if(mp[s[j]] >= 1)
            {
                while(mp[s[j]] > 1)
                {
                    mp[s[i]]--;
                    i++;
                }
            }
             maxi = max(maxi , j - i + 1);
        }
        return maxi ; 
    }
};