#include <bits/stdc++.h>

using namespace std ;



bool solve(int *arr, int size, int sum)
{
	bool dp[size+1][sum+1] ;
	
	for(int i = 0 ; i <= size ; i++)
	  dp[i][0] = true ;
	
	for(int i = 1 ; i <= sum ; i++)
	  dp[0][i] = false ;
	  
	for(int i = 1 ; i <= size ; i++)
	   for(int j = 1 ; j<= sum ; j++)
	   {
	     if(j < arr[i-1])
	       dp[i][j] = dp[i-1][j] ;
	     if(j >= arr[i-1])
	       dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]] ;
	   }
	   
   return dp[size][sum] ;		 
}

int main()
{
	int arr[5] = {3,2,1,5,4} ;
	cout << solve(arr,5,9) ;
}
