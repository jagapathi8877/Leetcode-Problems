class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>mp;
        for(int i : nums) mp[i]++;
        vector<int>ans ;
        for(int i : nums) 
        {
            if(mp[i] == 1)
            {
                if(mp[i - 1] == 0 && mp[i+1] == 0 ) ans.push_back(i);
            }
        }
        return ans ;
    }
};