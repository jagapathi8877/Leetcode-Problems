class Solution {
public:
    string makeGood(string s) {
        string arr = "" ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(!arr.empty())
            {
                if(abs(arr.back() - s[i]) == 32) arr.pop_back() ;
                else arr += s[i];
            }
            else arr+= s[i];
        }
        return arr;
    }
};