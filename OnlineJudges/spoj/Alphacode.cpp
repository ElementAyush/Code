#include<bits/stdc++.h>

using namespace std ;

int main()
{
	char n[5000] ;
	long long dp[5001] ;
	while(true)
	{
		cin >> n ;
		if(n[0] == '0') break;
		dp[0] = dp[1] = 1 ;
		int len = strlen(n) ;
		
		for(int i = 2 ; i <= len ; i++)
		{
		int c1 = n[i-2] - '0' , c2 = n[i-1] - '0' ;
		if(c1 == 1 || (c1 == 2 && c2 <= 6))
		 dp[i] += dp[i-2] ;
		if(c2 != 0)
		  dp[i] += dp[i-1] ;
		}
	    cout << dp[strlen(n)] << "\n";
	    memset(n, 0, sizeof(n));
	    memset(dp, 0, sizeof(dp));
	}
	
}
