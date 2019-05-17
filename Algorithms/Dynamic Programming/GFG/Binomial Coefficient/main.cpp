/*
 https://www.geeksforgeeks.org/binomial-coefficient-dp-9/
 The value of C(n, k) can be recursively calculated using following standard formula for Binomial Coefficients.
   C(n, k) = C(n-1, k-1) + C(n-1, k)
   C(n, 0) = C(n, n) = 1
*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int n = 4 , k = 2 ;
	int dp[n + 1][k + 1] ;
	
	for(int i = 0 ; i <= n ; i++)
	  dp[i][0] = 1 ;
		for(int i = 0 ; i <= k ; i++)
	  dp[0][k] = 0 ;
	
	
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= k ; j++)
		{
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] ;
		}
	}
	
		for(int i = 0 ; i <= n ; i++)
		{
		for(int j = 0 ; j <= k ; j++)
		{
			cout << dp[i][j] << " " ;
		}
		cout << "\n" ;
	   }
		
}
