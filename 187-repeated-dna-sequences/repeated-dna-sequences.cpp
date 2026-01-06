class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans ;
        int i = 0 ;
        unordered_map<string,int>mp ;

        for(int j = 0 ; j < s.size(); j++)
        {
           string res = s.substr(j , 10);
           mp[res]++;
        }
        for(auto i : mp) if(i.second > 1) ans.push_back(i.first);
        return ans ;
    }
};