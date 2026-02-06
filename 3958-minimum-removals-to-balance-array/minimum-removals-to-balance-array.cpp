class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ;
        int maxi = nums.size();
        int n = nums.size();
        int i = 0 ;
        for(int j = 0 ; j < n ; j++)
        {
            while(i < j && (nums[j] > 1LL *  k * nums[i])) i++;
            maxi = min(maxi , n - (j - i + 1));
            cout << maxi << " " ;   
        }
        return maxi;
    }
};