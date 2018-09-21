#include <bits/stdc++.h>
#include <cstdint>

using namespace std ;

long long int minChangeCoin(uint64_t *coins , long long int m , long long int n)
{
	uint64_t dp[n + 1][m] ;
	  
	for(long long int i = 0 ; i < m ; i++)
	  dp[0][i] = 1 ;
	  
	for(long long int i = 1 ; i <= n ; i++)
	{
		for(long long int j = 0 ; j < m ; j++)
		{
				//including the current coin
				uint64_t x = (i - coins[j] >= 0) ? dp[i-coins[j]][j] : 0 ;
				//Excluding current coin  
				uint64_t y = (j >= 1) ? dp[i][j-1] : 0 ;
				
		    	dp[i][j] = x + y ;
		}
	}
	
	return dp[n][m - 1] ;
} 

int main()
{
	long long int n , m ;
	
	cin >> n >> m ; 
	uint64_t coins[m] ;
	
	for(long long int i = 0 ; i < m ; i++)
	  cin >> coins[i] ;
	  
	cout << minChangeCoin(coins , m , n) << "\n" ;
}
