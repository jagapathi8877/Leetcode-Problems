class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>ans(n) , prefix(n) ;
        prefix[0] = nums[0] ;
        int sum = 0 ; 
        for(int i : nums) sum += i ;
        ans[0] = sum - (n * nums[0]) ;
        for(int i = 1 ; i < n ; i++)
        {
            int res = abs(prefix[i-1] - ((i+1) * nums[i]));
            prefix[i] = nums[i] + prefix[i-1];
            ans[i] = res + sum - prefix[i] - (n-i) * nums[i];
        }
        for(int i : prefix) cout << i << " " ;
        return ans ;
    }
};


