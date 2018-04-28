#include <bits/stdc++.h>

using namespace std ;

int computeProfit(int *prices , int size , int k)
{
	int dp[k + 1][size + 1] ;
	
	for(int i = 0 ; i <= size ; i++)
	  dp[0][i] = 0 ;
	  
	for(int i = 0 ; i <= k ; i++)
	  dp[i][0] = 0 ;
	  
	for(int i = 1 ; i <= k ; i++)
	{
		int max_profit = INT_MIN ;
		for(int j = 0 ; j < size ; j++)
		{
			max_profit = max(max_profit, max(prices[i] - prices[j]) , dp[i-1][j]) ;
		}
	}
}

int main()
{
	int k = 2 ;
	int prices[] = { 10, 22, 5, 75, 65, 80 };
	int size = sizeof(prices)/sizeof(prices[0]) ;
	
	cout << computeProfit(prices,size,k) << "\n" ;
	
}
