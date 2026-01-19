class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) { 
        int ans = 0 ; 
       for(int i = 0 ; i < grid.size() ; i++) sort(grid[i].begin() , grid[i].end()) ;
       for(int i = 0 ; i < grid[0].size() ; i++)
       {
            int maxi = 0 ;
            for(int j = 0 ; j < grid.size() ; j++) maxi = max(maxi , grid[j][i]);
            ans += maxi ;
       }
        return ans ;
    }
};