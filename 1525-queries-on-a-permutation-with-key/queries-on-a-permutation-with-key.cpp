class Solution {
public:
    vector<int> processQueries(vector<int>& arr, int m) {
        vector<int>ans ;
        vector<int>res;
        for(int i = 1 ; i <= m ; i++) ans.push_back(i);
        for(int i = 0 ; i < arr.size() ; i++)
        {
            auto it = find(ans.begin() ,ans.end() , arr[i]) ;
            res.push_back(it-ans.begin()) ;
            ans.erase(it);
            ans.insert(ans.begin() , arr[i]);
        }
        return res ;
    }
};

