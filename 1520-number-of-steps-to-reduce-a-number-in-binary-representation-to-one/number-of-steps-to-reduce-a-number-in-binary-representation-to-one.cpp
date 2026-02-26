class Solution {
public:
    int numSteps(string s) {
       int ans = 0 ;
       while(s.size() != 1)
       {
         if(s.back() == '1')
         {
            s[s.size() - 1] = '0' ;
            int j = s.size() - 2 ;
            while(j >= 0 && s[j] != '0') s[j--] = '0';
            if(j >= 0) s[j] = '1';
            else
            {
                for(int i = 0 ; i < s.size() ; i++) s[i] = '0' ; 
                s = '1' + s ;
            }
         }
         else s.pop_back();
         ans++;
       }
       return ans;
    }
};