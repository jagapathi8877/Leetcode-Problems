class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& arr) {
        vector<int>ans(arr.size());
        sort(arr.begin() , arr.end()) ;
        queue<int>q ;
        for(int i = 0 ; i < arr.size() ; i++) q.push(i) ;
        for(int i = 0; i < arr.size() ; i++)
        {
            ans[q.front()] = arr[i];
            q.pop();
            q.push(q.front()) ;
            q.pop();
        }
        return ans;
    }
};
