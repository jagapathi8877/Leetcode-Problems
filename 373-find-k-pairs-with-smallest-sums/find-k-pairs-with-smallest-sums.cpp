class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<pair<int ,pair<int,int>>>pq ;
        vector<vector<int>>ans ;
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            for(int j = 0 ; j < nums2.size() ; j++)
            {
                int num = nums1[i] + nums2[j] ;
                if(pq.size() < k ) pq.push({num , {nums1[i] , nums2[j]}});
                else if(num < pq.top().first)
                {
                    pq.pop();
                    pq.push({num , {nums1[i] , nums2[j]}});
                }
                else if(num >= pq.top().first) break ;
            }
        }
        while(!pq.empty()) 
        {
            ans.push_back({pq.top().second.first , pq.top().second.second});
            pq.pop();
        }
       return ans ;
    }
};