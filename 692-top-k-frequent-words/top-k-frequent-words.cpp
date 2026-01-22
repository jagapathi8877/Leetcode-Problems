class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp ;
        for(auto i : words) mp[i]++;
        priority_queue<pair<int,string> , vector<pair<int,string>> , greater<pair<int,string>>>pq ;
        for(auto i : mp)
        {
            pq.push({-i.second , i.first});
        }
        vector<string>ans ;
        for(int i = 0 ; i < k ; i++)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans ;
    }
};