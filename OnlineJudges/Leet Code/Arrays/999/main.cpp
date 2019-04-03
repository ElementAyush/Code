#include<bits/stdc++.h>

using namespace std ;

 int numRookCaptures(vector<vector<char>>& board) {
        
        int x = 0 , y = 0 , count = 0 ;
        int xSize = board.size() , ySize = board[0].size(); 
        
        for(int i = 0 ; i < xSize ; i++)
        {
            for(int j = 0 ; j < ySize ; j++)
            {
                if(board[i][j] == 'R')
                {
                    x = i  ; y = j ; 
                    break ;
                }
            }
        }
        int moveX = x + 1, moveY = y + 1;
        //moving downward
        while(moveX < xSize)
        {
            if(board[moveX][y] == '.')
                moveX++ ;
            if(board[moveX][y] == 'p')
            {
                count++ ;
                break ;
            }
            if(board[moveX][y] != 'p' && board[moveX][y] != '.')
                break ;
        }
        //move upwards
        moveX = x - 1 ;
         while(moveX >= 0)
        {
            if(board[moveX][y] == '.')
                moveX-- ;
            if(board[moveX][y] == 'p')
            {
                count++ ;
                break ;
            }
            if(board[moveX][y] != 'p' && board[moveX][y] != '.')
                break ;
        }
        //moving right
         while(moveY < ySize)
        {
            if(board[x][moveY] == '.')
                moveY++ ;
            if(board[x][moveY] == 'p')
            {
                count++ ;
                break ;
            }
            if(board[x][moveY] != 'p' && board[x][moveY] != '.')
                break ;
        }
        
        //moving left
        moveY = y - 1 ;
         while(moveY >= 0)
        {
            if(board[x][moveY] == '.')
                moveY-- ;
            if(board[x][moveY] == 'p')
            {
                count++ ;
                break ;
            }
            if(board[x][moveY] != 'p' && board[x][moveY] != '.')
                break ;
        }
        return count ;
    }

void printVec(vector<vector<char>>& board)
{
	for(vector<char> k : board)
	{
		for(char i : k)
		 cout << i << " " ;
		cout << "\n" ;
	}
}
int main()
{
	vector< vector <char> > board = {
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','p','.','.','.','.'},
	{'.','.','.','R','.','K','.','p'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','p','.','.','.','.'},
	{'.','.','.','.','.','.','.','.'},
	{'.','.','.','.','.','.','.','.'}
	} ;
	//printVec(board)  ;
	//cout << endl ;
	cout << numRookCaptures(board) ;
}
