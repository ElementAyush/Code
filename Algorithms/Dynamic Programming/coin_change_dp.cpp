/* Coin change problem using memoization */
#include <bits/stdc++.h>

using namespace std;

int solve(int *coins,int n , int k)
{
	int solution[k+1][n+1] ;
	for(int i = 0 ; i <= n ; i++ )
	 solution[0][i] = 0 ;
	 
	 for(int i = 0 ; i <= k ; i++ )
	 solution[i][0] = 1 ;
	
	for(int i = 1 ; i <= k ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			if(coins[i - 1] <= j)
			{
				solution[i][j] = solution[i - 1][j] + solution[i][j-coins[i-1]] ;
			}
		}
	} 
	 
}

int main()
{
	int n = 5 , coins[]={1,2,3} ;
	cout << solve(coins,n,3) ;
}
