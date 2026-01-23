class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size() ;
        string res = s[0];
        for(int i = 1 ; i < s.size() ; i++)
        {
            string re = "" ;
            for(int j = 0 ; j < res.size() ; j++)
            {
                if(s[i][j] == res[j]) re += s[i][j] ;
                else break;
            }
            res = re ;
        }
        return res ;
    }
};