class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        map<char,int>mp;
        for(auto i : brokenLetters) mp[i] = 1 ;
        stringstream ss(text);
        string word;
        vector<string>res;
        int cnt = 0 ;
        while(ss >> word) res.push_back(word);
        for(auto i : res)
        {
            int flag = 0 ;
            for(char j : i) 
            {
                if(mp[j] == 1) {cnt++ ; break; }   
            }
        }
        return res.size() - cnt;
    }
};