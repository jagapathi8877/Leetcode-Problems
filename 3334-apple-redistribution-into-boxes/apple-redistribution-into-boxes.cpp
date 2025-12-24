class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        int s =0  ; 
        for(int i = 0 ; i < a.size() ; i++) s += a[i] ;
        int cnt= 0 ; 
        sort(c.begin() , c.end()) ;
        cout << s << endl ;
        for(int i = c.size() -1  ; i >= 0 ; i--) 
        {
            cnt++;
            s-=c[i] ;
            cout << s << " " ;
           if(s <= 0) return cnt ;
        }
        return cnt ;
    }
};

