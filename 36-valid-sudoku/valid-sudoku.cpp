class Solution {
public:
    int row(vector<char>arr )
    {
        map<char,int>mp ;
        for(auto i : arr)
        {
            if(i == '.') continue ;
            mp[i]++;
            if(mp[i] >= 2) return 0;
        }
        return 1;
    }
    int col(vector<vector<char>>arr , int col)
    {
        map<char,int>mp ;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(arr[i][col] == '.') continue ;
            mp[arr[i][col]]++;
            if(mp[arr[i][col]] >= 2) return 0 ;
        }
        return 1 ;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i = 0 ; i < board.size() ; i++) if(row(board[i]) == 0) return 0 ;
        for(int j = 0 ; j < board[0].size() ; j++) if(col(board , j) == 0) return 0 ;
        for(int i = 0 ; i < board.size() ; i+=3)
        {
            for(int j = 0 ; j < board[i].size() ; j+=3)
            {
                map<char,int>mp ;
                    for(int x = i ; x < i+3 ; x++)
                    {
                        for(int y = j ; y < j+3 ; y++)
                        {
                            if(board[x][y] == '.') continue ;
                            mp[board[x][y]]++;
                            if(mp[board[x][y]] >= 2) return 0 ;
                        }
                    }
                
            }
        }
        return 1 ;
    }
};