#include<bits/stdc++.h>

using namespace std ;

int calculate(int length , int *weight , int *profit , int arrLength)
{
  int dp[arrLength + 1][arrLength + 1] ;

  for(int i = 0 ; i < arrLength ; i++)
  	 dp[0][i] = 0 ;
  for(int i = 0 ; i < arrLength ; i++)
  	 dp[i][0] = 0 ;

  	for(int i = 1 ; i < arrLength ; i++)
  	{
  		for(int j = 1 ; j < arrLength ; j++)
  		{
  			dp[i][j] = max(profit[weight[j]] + profit[i - weight[j]] , dp[i - 1][j]) ;
  		}
  	}
}

int main()
{
	int length = 5 ;
	int weight[] = {1 , 2 , 3 , 4 , 5} ; 
	int profit[] = {2 , 5 , 7 , 8 , 10} ;
}