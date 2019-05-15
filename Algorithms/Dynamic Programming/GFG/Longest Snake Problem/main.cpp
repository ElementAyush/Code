/*
   https://www.geeksforgeeks.org/find-maximum-length-snake-sequence/
*/
#include<bits/stdc++.h>

using namespace std ;

#define M 4 
#define N 4

int findLongestSnake(int mat[M][N])
{
	int dp[M][N] ;
	memset(dp,0,sizeof(dp)) ;
	int maxLength = 0 ;
	int x = 0 , y = 0 ;   // cordinates to the tail of snake for tracing
	
	for(int i = 0 ; i < M ; i++)
	{
		for(int j = 0 ; j < N ; j++)
		{
		  if(i || j)
		  {
		  	//moving up
		  	if(i > 0 && abs(mat[i - 1][j] - mat[i][j]) == 1)
		  	{
		  	  dp[i][j] = max(dp[i][j] , dp[i -1][j] + 1) ;
			  if(maxLength < dp[i][j])
			  {
			    maxLength = dp[i][j] ;
				x = i ; y = j ;	
			  }	
			}
			
			//moving left
			
			if(j > 0 && abs(mat[i][j - 1] - mat[i][j]) == 1)
			{
				dp[i][j] = max(dp[i][j] , dp[i][j - 1] + 1) ;
				if(maxLength < dp[i][j])
			  {
			    maxLength = dp[i][j] ;
				x = i ; y = j ;	
			  }	
			}
		  }
		}
	}
	
	for(int i = 0 ; i < M ; i++)
	{
		for(int j = 0 ; j < N ; j++)
		{
			cout << dp[i][j] << " " ;
		}
		cout << "\n" ;
	}
	
	return maxLength ;
}

int main()
{
	 int mat[M][N] = 
    { 
        {9, 6, 5, 2}, 
        {8, 7, 6, 5}, 
        {7, 3, 1, 6}, 
        {1, 1, 1, 7}, 
    }; 
    
    cout << findLongestSnake(mat) ;
}
