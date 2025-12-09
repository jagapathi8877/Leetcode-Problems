class Solution {
public:
    int minimumRefill(vector<int>& arr, int a, int b) {
        int alice = a , bob = b , j = arr.size()-1 ;
        int cnt = 0 ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(i > j) break ;
            if(i == j) 
            {
                if(a < arr[i] && b < arr[j]) cnt++;
                break ;
            }
            if(a >= arr[i]) a-=arr[i];
            else if(a < arr[i])
            {
                cnt++;
                a = alice ;
                a-=arr[i] ;
            }
            if(b >= arr[j]) b-=arr[j--];
            else if(b < arr[j])
            {
                cnt++;
                b = bob ;
                b-=arr[j--] ;
            }
            cout << j << " " ;
        }
        return cnt ;
    }
};

