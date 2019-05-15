/*
   https://www.geeksforgeeks.org/bell-numbers-number-of-ways-to-partition-a-set/
*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int n = 6 ;
	
	int dp[n + 1][n + 1] ;
	memset(dp , 0 , sizeof(dp)) ;
	dp[0][0] = 1 ;
	
	for(int i = 1 ; i <= n ; i++)
	{
	  dp[i][0] = dp[i - 1][i - 1] ;	
	  
	  for(int j = 1 ; j <= i ; j++)
	  {
	  	dp[i][j] = dp[i][j-1] + dp[i - 1][j - 1] ;
	  }
	}
	
	for(int i = 0 ; i <= n ; i++)
	{
		for(int j = 0 ; j <= i ; j++)
		{
			cout << dp[i][j] << " " ;
		}
		cout << "\n" ;
	}
}
