class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin() , nums.end()) ;
        int maxi = 0 ;
        for(int i : s)
        {
            if(s.find(i-1) == s.end())
            {
                int j = i ;
                int count = 1 ;
                while(s.find(j+1) != s.end())
                {
                    j++;
                    count++;
                }
                maxi = max(maxi , count) ;
            }
        }
        return maxi ; 
    }
};