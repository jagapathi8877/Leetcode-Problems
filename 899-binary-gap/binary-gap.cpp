class Solution {
public:
    int binaryGap(int n) {
        bitset<32>arr(n);
        int ans = 0 , flag = 0 , idx ;
        for(int i = 0 ; i < 32 ; i++)
        {
            if(arr[i] == 1 && flag == 1)  ans = max(ans , i - idx);
            if(arr[i] == 1 )
            {
                flag = 1 ;
                idx = i ;
            }
        }
        return ans;
    }
};