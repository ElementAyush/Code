#include <bits/stdc++.h>

using namespace std ;

int knapsack(int *items , int *wt , int size , int w)
{
	int dp[w + 1] ;
	memset(dp , 0 , sizeof dp) ;
	
	for(int i = 0 ; i <= w ; i++)
	  {
	  	for(int j = 0 ; j < size ; j++)
	  	{
	  	  if(wt[j] <= i)
			dp[i] = max(dp[i] , dp[i - wt[j]] + items[j]) ;	
		}
	  }
	  
  return dp[w] ;
}

int main()
{
 int w = 100 ; 
 int items[] = {10, 30, 20};
 int wt[] = {5, 10, 15};
 cout << knapsack(items , wt , 3 , w) << "\n" ;	
}
