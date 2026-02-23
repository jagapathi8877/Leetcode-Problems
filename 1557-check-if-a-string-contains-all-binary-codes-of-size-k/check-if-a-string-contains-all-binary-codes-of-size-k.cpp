class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_map<int,int>mp ;
        string ans ; 
        if(k > s.size()) return 0 ;
        for(int i = 0 ; i < k ; i++) ans += s[i];
        int x = stoi(ans , nullptr , 2);
        mp[x]++;
        for(int i = k ; i < s.size() ; i++)
        {
            ans.erase(ans.begin());
            ans += s[i];
            x = stoi(ans , nullptr , 2);
            mp[x]++;
        }
        if(mp.size() == pow(2,k)) return 1 ;
        return 0 ;
    }
};