class Solution {
public:
int bit(int n)
{
    int cnt = 0 ; 
    while(n)
    {
        n = n & (n-1);
        cnt++;
    }
    return cnt ;
}
    vector<string> readBinaryWatch(int n) {
        vector<string>ans;
        for(int i = 0 ; i < 12 ; i++)
        {
            for(int j = 0 ; j < 60 ; j++)
            {
                if(bit(i) + bit(j) == n)
                {
                    string s ;
                    s += to_string(i);
                    s += ":";
                    if( j < 10) s += '0';
                    s += to_string(j);
                    ans.push_back(s);
                }
            }
        }
        return ans ;
    }
};