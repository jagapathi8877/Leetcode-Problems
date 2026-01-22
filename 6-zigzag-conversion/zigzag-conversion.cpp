class Solution {
public:
    string convert(string s, int row) {
        int n = s.size() ;
        if(row == 1 || row >= s.size()) return s ;
        vector<vector<char>>arr(row , vector<char>(s.size() , ' ')) ;
        int l = 0 , r  = 0 ;
        int down = 1 ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            arr[l][r] = s[i] ;
            if(down)
            {
               if(l == row-1)
               {
                   down = 0 ;
                   l-- , r++;
               }
               else l++;
            }
            else
            {
                if(l == 0)
                {
                    down = 1 ;
                    l++;
                }
                else 
                {
                    l-- , r++;
                }
            }
        }
        string ans ;
        for(auto i : arr)
        {
            for(auto j : i) if(j != ' ') ans += j;
        }
        return ans; 
    }
};