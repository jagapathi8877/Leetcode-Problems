class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i = 0 ; i  < nums.size() ; i++)
        {
            int x = 1 , found = 0 ;
            while(x < nums[i])
            {
                int res = x | (x+1) ;
                if(res == nums[i]) 
                {
                    found = 1 ;
                    break;
                }
                x++;
            }
            if(found) ans.push_back(x);
            else ans.push_back(-1);
        }
        return ans ;
    }
};
