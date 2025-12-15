class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& arr) {
        vector<int>ans(arr.size());
        sort(arr.begin() , arr.end()) ;
        queue<int>q ;
        int j = 0 ;
        for(int i = 0 ; i < arr.size() ; i++) q.push(i) ;
        for(int i = 0; i < arr.size() ; i++)
        {
            ans[q.front()] = arr[j++];
            q.pop();
            q.push(q.front()) ;
            q.pop();
        }
        return ans;
    }
};
