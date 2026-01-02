class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& arr) {
        sort(arr.begin() , arr.end()) ;
        long long ans = mass ;
        for(int i : arr)
        {
            if(i > ans) return 0;
            ans += i;
        }
        return 1 ;
    }
};