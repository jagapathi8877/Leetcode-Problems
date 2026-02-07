class Solution {
public:
    int minimumDeletions(string s) {
        int b = 0 , a = 0 , ans = 0 ;
        for(auto i : s) 
        {
            if(i == 'b') b++;
            else
            {
               ans = min(ans+1, b);
            }
        }
        return ans;
    }
};