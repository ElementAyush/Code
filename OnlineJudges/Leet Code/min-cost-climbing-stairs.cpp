#include <bits/stdc++.h>

int main()
{
	int cost[] = {1, 100, 1, 1, 1, 100, 1, 1, 100, 1} ;
	int arrSize = sizeof(cost) / sizeof(cost[0]) ;
	
	int fin = 0 , prev = 0 ;
	for(int i = 2 ; i <= arrSize ; i++)
	{
	  int num = (i == arrSize ? 0 : cost[i] );
	  int b = std :: min(cost[i-1] + prev, cost[i-2] + prev) ;  
	  fin += b  ;
	  prev = num ;
	}
	
	std ::  cout << fin << "\n" ;
}
