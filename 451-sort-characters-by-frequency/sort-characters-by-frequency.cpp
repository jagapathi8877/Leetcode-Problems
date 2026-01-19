class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp ;
        vector<pair<int,int>>res ;
        for(auto i : s) mp[i]++;
        for(auto i : mp) res.push_back({i.second , i.first}) ;
        sort(res.rbegin() , res.rend()) ;
        string ans ;
        for(auto i : res)
        {
            for(int j = 0 ; j < i.first ; j++) ans += i.second ;
        }
        return ans ;

    }
};