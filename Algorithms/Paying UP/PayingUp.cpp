#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int test_case ;
	cin >> test_case ;
	while(test_case--)
	{
		int n , sum , totalSum ;
		cin >> n >> sum ;
		int arr[n] ;
		for(int i = 0 ; i < n ; i++)
		  cin >> arr[i] ;
		int count = 0 ;
		for(int i = 0 ; i < (1 << n) ; i++)
		{
		    totalSum = 0 ;
			for(int j = 0 ; j < n ; ++j)
			 if(i & (1 << j))
			  totalSum += arr[j] ;
		     if(totalSum == sum)
		     {
			  count = 1 ; ;
			  break ;
		     }
		}
			 count == 1 ? cout << "Yes" << endl  : cout << "No" << endl ;  
	}
	
	return 0 ;
}
