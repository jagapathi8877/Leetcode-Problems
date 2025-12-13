class Solution {
public:
    int valid(string s)
    {
        if(s == "") return 0 ;
        for(auto c : s)
        {
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c<= '9') || c == '_') continue ;
            else return 0;
        }
        return 1;
    }
    int slime(string s)
    {
        if(s=="electronics" or s=="grocery" or s=="pharmacy" or s=="restaurant") return 1;
        else return 0;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& s, vector<bool>& isActive) {
        int n = code.size();
        vector<pair<int , string> > ans ;
        for(int i = 0 ; i < n ; i++)
        {
            if(isActive[i])
            {
                int order = -1 ;
                if (s[i] == "electronics") order = 0;
                else if (s[i] == "grocery") order = 1;
                else if (s[i] == "pharmacy") order = 2;
                else if (s[i] == "restaurant") order = 3;
                if(valid(code[i]) && slime(s[i]) && order >= 0 ) ans.push_back({order ,code[i]}) ;
            }
        }
        vector<string>a ;
        sort(ans.begin() , ans.end()) ;
        for(auto i : ans) a.push_back(i.second);
        return a ;
    }
};