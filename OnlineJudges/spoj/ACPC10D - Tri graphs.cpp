#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int n ;
	cin >> n ;
	int arr[n][3] , dp[n+1][4] ;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
		{
			cin >> arr[i][j] ;
		}
	}
	
	memset(dp,0,sizeof(dp)) ;
	
	for(int i = 0 ; i < n  ; i++)
	{
			if(i == 0)
			 arr[i][2] += arr[i][1] ;
			if(i == 1)
			 {
			 	arr[i][0] += min(arr[i - 1][0] , arr[i - 1][1]) ;
				arr[i][1] += min() 
			 }
			
			
			 dp[i][j] = min(arr[i][j+1] , (min(arr[i+1][j+1] , (min(arr[i+1][j-1] , arr[i+1][j]))))); 
	}
}
