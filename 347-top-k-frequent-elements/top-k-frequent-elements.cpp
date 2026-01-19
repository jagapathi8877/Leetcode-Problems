class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        map<int,int>mp ;
        vector<pair<int,int>>res ;
        for(int i : arr) mp[i]++;
        for(auto i : mp) res.push_back({i.second , i.first}) ;
        sort(res.rbegin() , res.rend()) ;
        vector<int>ans ;
        for(auto i : res)
        {
            if(ans.size() < k) ans.push_back(i.second) ;
        }
        return ans ;
    }
};