#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int arr[] = {7, 1, 5, 3, 6, 4} ;
	int minPrice = arr[0] , maxPrice = 0 , pprofit , profit ;
	
	for(int i = 0 ; i < 6 ; i++)
	{
		minPrice = min(minPrice , arr[i]) ;
		pprofit = arr[i] - minPrice ;
		profit = max(pprofit,profit) ;
	}
	
	cout << profit << "\n" ;
	
}
