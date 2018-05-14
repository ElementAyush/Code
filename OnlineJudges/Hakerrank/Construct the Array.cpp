#include<bits/stdc++.h>

using namespace std ;

int calculate(int n , int k , int x)
{
	int dp[n + 1][k + 1] ;
	for(int i = 0 ; i <= n ; i++)
	{
		for(int j = 0 ; j <= k ; k++)
		{
			if(i == 0 || j == 0)
			 dp[i][j] = 0 ; 
		}
	}
}


int main()
{
	int n , k , x ;
	cin >> n , k , x ;
	int calculate(n , k , x) ;
	
}
