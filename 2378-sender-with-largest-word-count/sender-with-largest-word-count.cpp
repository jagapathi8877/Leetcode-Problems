class Solution {
public:
    int word_count(string s)
    {
        int cnt = 0 ;
        for(int i = 0 ; i < s.size() ; i++) if(s[i] == ' ') cnt++;
        return cnt+1 ;
    }
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string , int >mp ;
        for(int i = 0 ; i < senders.size() ; i++)
        {
            int res = word_count(messages[i]) ;
            mp[senders[i]] += res ;
        }
        string ans ;
        int maxi = 0 ;
        for(auto i : mp)
        {
            if(i.second > maxi || (i.second == maxi && i.first > ans))
            {
                maxi = i.second ;
                ans = i.first ;
            }
        }
        return ans ;
    }
};