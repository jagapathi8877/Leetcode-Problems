class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        map<int,int>mp ;
        for(int i : bulbs)
        {
            if(mp[i]) mp[i] = 0 ;
            else mp[i] = 1 ;
        }
        vector<int>ans ;
        for(auto i : mp)
        {
            if(i.second == 1) ans.push_back(i.first);
        }
        return ans ;
    }
};