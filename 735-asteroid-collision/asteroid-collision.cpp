class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
        vector<int>ans ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(!ans.empty() && ans.back() > 0 && arr[i] < 0)
            {
                while(!ans.empty() && ans.back() > 0 && ans.back() < abs(arr[i]) ) ans.pop_back() ;
                if(!ans.empty() && ans.back() == abs(arr[i])) ans.pop_back() ;
                else if(ans.empty() || ans.back() < 0) ans.push_back(arr[i]) ;
            }
            else ans.push_back(arr[i]) ;
        }
        return ans ;
    }
};