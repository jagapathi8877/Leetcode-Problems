class Solution {
public:
    int up(vector<vector<char>>& board , int col , int pos)
    {
        int flag = 0 ;
        for(int row = pos ; row >= 0 ; row--)  
        {
            if(board[row][col] == 'p' && flag == 0) return 1;
            else if(board[row][col] == 'B') flag = 1;
        }
        return 0 ;
    }

    int down(vector<vector<char>>& board , int col , int pos)
    {
        int flag = 0 ;
        for(int row = pos ; row < board.size(); row++)  
        {
            if(board[row][col] == 'p' && flag == 0) return 1;
            else if(board[row][col] == 'B') flag = 1;
        }
        return 0 ;
    }

    int left(vector<vector<char>>& board , int row , int pos)
    {
        int flag = 0 ;
        for(int col = pos ; col >= 0 ; col--)  
        {
            if(board[row][col] == 'p' && flag == 0) return 1;
            else if(board[row][col] == 'B') flag = 1;
        }
        return 0 ;
    }

    int right(vector<vector<char>>& board , int row , int pos)
    {
        int flag = 0 ;
        for(int col = pos ; col < board[0].size(); col++)  
        {
            if(board[row][col] == 'p' && flag == 0 ) return 1;
            else if(board[row][col] == 'B') flag = 1;
        }
        return 0 ;
    }

    int numRookCaptures(vector<vector<char>>& board) {
        int cnt = 0 ; 
        for(int i = 0 ; i < board.size() ; i++)
        {
            for(int j = 0 ; j < board[i].size() ; j++)
            {
                if(board[i][j] == 'R')
                {
                    if(up(board , j , i)) cnt+=1;
                    if(down(board , j , i)) cnt+=1;
                    if(left(board , i , j)) cnt+=1;
                    if(right(board , i , j)) cnt+=1;
                }
            }
        }
        return cnt;
    }
};