#include <bits/stdc++.h>

using namespace std ; 

int maxProfit(int *prices , int n ) 
{
	int *profit = new int[n] ;
	memset(profit,n,0) ;
	
	int max_price = prices[n - 1] ;
	for(int i = n - 2 ; i >= 0 ; i--)
	{
		if(prices[i] > max_price)
		 max_price = prices[i] ;
		 
		profit[i] = max(profit[i + 1] , max_price - prices[i]) ;
	}
	
	int min_price = prices[0] ;
	for(int i = 1 ; i < n ; i++)
	{
		if(prices[i] < min_price)
		 min_price = prices[i] ;
		 
		profit[i] = max(profit[i - 1] , profit[i] + (prices[i] - min_price)) ; 
	}
	
	int result = profit[n - 1] ;
	
	delete [] prices ;
	
	return result ;
}

int main()
{
	int prices[] = {2, 30, 15, 10, 8, 25, 80};
    int n = sizeof(prices)/sizeof(prices[0]);
    
    cout << maxProfit(prices,n) ;
}
