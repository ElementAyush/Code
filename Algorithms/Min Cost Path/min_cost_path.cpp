#include <bits/stdc++.h>

using namespace std ;

int min(int a , int b , int c)
{
	if(a < b)
	  return (a < c)? a : c ;
	else
	  return (b < c)? b : c ;
}

int minCostPath(int arr[3][3] , int gridSize)
{
	int dp[gridSize][gridSize] ;
	dp[0][0] = arr[0][0] ;
	for(int i = 1 ; i < gridSize ; i++)
		dp[i][0] = dp[i-1][0]+arr[i][0] ;
	
	for(int j = 1 ; j < gridSize ; j++)
		dp[0][j] = dp[0][j-1]+arr[0][j] ;
	for(int i = 1 ; i < gridSize ; i++)
	   for(int j = 1 ; j < gridSize ; j++)
	   	 dp[i][j] = arr[i][j] + min(dp[i-1][j] , dp[i][j-1] , dp[i-1][j-1]) ;
	   
	return dp[gridSize-1][gridSize-1] ;
}

int main()
{
	int arr[3][3] = {{1,2,3},{4,8,2},{1,5,3}};
	cout << minCostPath(arr,3) << "\n";
}
