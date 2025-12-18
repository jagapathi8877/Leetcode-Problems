class Solution {
public:
    int minLength(string s) {
        string arr = "" ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(!arr.empty())
            {
                if((arr.back() == 'A' && s[i] == 'B') || (arr.back() == 'C' && s[i] == 'D')) arr.pop_back();
                else arr+=s[i]; 
            }
            else arr += s[i] ;
        }
        return arr.size();
    }
};