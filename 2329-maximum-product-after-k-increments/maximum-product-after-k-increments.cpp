class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {
        priority_queue<int , vector<int> , greater<int>> q ;
        for(int i : nums) q.push(i) ;
        long long MOD = 1e9 + 7 ;
        while(k--)
        {
            int x = q.top() ;
            q.pop();
            q.push(x+1);
        }
        long long ans = 1 ;
        while(!q.empty())
        {
            long long res = q.top() ;
            ans = (ans * res)%MOD ;
            q.pop();
        }
        return ans ;
    }
};