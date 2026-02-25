class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>mp;
        for(int i = 0 ; i < arr.size() ; i++)    mp.push_back({__builtin_popcount(arr[i]) , arr[i]});
        vector<int>ans;
        sort(mp.begin() , mp.end());
        for(auto i : mp) ans.push_back(i.second);
        return ans;
    }
};