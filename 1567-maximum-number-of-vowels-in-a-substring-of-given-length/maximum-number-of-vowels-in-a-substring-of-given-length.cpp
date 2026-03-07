class Solution {
public:
    int maxVowels(string s, int k) {
        string a = "aeiou" ;
        int cnt = 0 , maxi = 0 ;
        for(int i = 0 ; i < k ; i++) if(a.find(s[i]) != string::npos) cnt++;
        maxi = max(maxi , cnt);
        int j  = 0 ;
        for(int i = k ; i < s.size() ; i++)
        {
            if(a.find(s[j]) != string::npos) cnt--;
            j++;
            if(a.find(s[i]) != string::npos) cnt++;
            maxi = max(maxi , cnt) ;
        }
        return maxi ; 
    }
};