class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        int sum = 0 ;
        vector<bool>ans ;
        int n = nums.size() ;
        int zer =0 ;
        for(int i = 0 ; i < n ; i++)
        {
            sum = sum << 1 ;
            sum = sum | nums[i];
            cout << sum << " " ;
            if(sum%5 == 0) ans.push_back(true);
            else ans.push_back(false);
            sum %= 5;
        }
        return ans ;
    }
};


 
           

