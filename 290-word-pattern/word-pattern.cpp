class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>res ;
        string vtr;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i] == ' ')
            {
                res.push_back(vtr) ;
                vtr = "" ;
            }
            else vtr += s[i] ;
        }
        res.push_back(vtr);
        map<char , string>mp ;
        if(pattern.size() != res.size()) return 0 ;
        set<string>st;
        for(int i  = 0 ; i < pattern.size() ; i++)
        {
            if(mp.count(pattern[i]))
            {
                if(mp[pattern[i]] != res[i]) return 0;
            }
            else
            {
                if(st.count(res[i])) return 0 ;
                st.insert(res[i]);
                mp[pattern[i]] = res[i];
            }
        }
        return 1;
    }
};