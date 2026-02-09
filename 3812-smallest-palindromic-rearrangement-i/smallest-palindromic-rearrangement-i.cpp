class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size() ;
        if(s.size() < 2) return s ;
        map<char,int>mp;
        for(auto i : s) mp[i]++;
        vector<char>ans(n);
        int l = 0 , r= n - 1 ;
        char ch = '0';
        for(auto i : mp)
        {
            int x = i.second; 
            while(x >= 2)
            {
                ans[l++] = i.first;
                ans[r--] = i.first;
                x-=2;
            }
            if(x == 1 && ch == '0') ch = i.first;
        }
        if(ch != '0') ans[l] = ch ;
        string res;
        for(auto i : ans) res += i;
        return res;
    }
};