class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int,vector<int>>mp ;
        for(int i = 0 ; i < mat.size() ; i++)
        {
            for(int j = 0 ; j < mat[i].size() ; j++) mp[i+j].push_back(mat[i][j]);
        }
        int cnt = 0 ;
        vector<int>ans ;
        for(auto i : mp)
        {
            vector<int>arr ;
            arr = i.second ;
            if(cnt%2 == 0) reverse(arr.begin() , arr.end());
            for(int j : arr) ans.push_back(j);
            cnt+=1;
        }
        return ans ;
    }
};
