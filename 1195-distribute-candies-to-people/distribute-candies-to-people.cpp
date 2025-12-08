class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int>arr(n , 0) ;
        int cand = 0 ;
        while(candies > 0 )
        {
            for(int i = 0 ; i < n ; i++)
            {
                cand+=1 ;
                if(cand <= candies) 
                {
                    arr[i]+=cand ;
                    candies-=cand ;
                }
                else if(candies < cand)
                {
                    arr[i]+= candies;
                    candies = 0 ;
                }
            }

        }
        return arr;
    }
};

