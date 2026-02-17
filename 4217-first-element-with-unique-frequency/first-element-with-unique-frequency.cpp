class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>mp ;
        for(int i : nums) mp[i]++;
        unordered_map<int,int>mpp ;
        for(auto i : mp) mpp[i.second]++;
        vector<int>arr ;
        for(auto i : mpp) if(i.second == 1) arr.push_back(i.first);
        for(auto i : nums)
        {
            if(find(arr.begin() , arr.end() , mp[i]) != arr.end()) return i;
        }
        return -1;
    }
};