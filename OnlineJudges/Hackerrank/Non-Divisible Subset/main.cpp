#include <bits/stdc++.h>

using namespace std ;

int solve(int *arr , int n , int k)
{
	int frequency[k] ;
	memset(frequency , 0 , sizeof(frequency)) ;
	
	for(int i = 0 ; i < n ; i++)
	 frequency[arr[i] % k]++ ;
	 
	if(k % 2 == 0)
	 frequency[k/2] = min(frequency[k/2] , 1) ;
	
	int res = min(frequency[0] , 1) ;
	
	for(int i = 1 ; i <= k / 2 ; i++)
	 res += max(frequency[i] , frequency[k - 1]) ;
	 
	return res ;
}

int main()
{
	int arr[] = {3, 7, 2, 9, 1};
	int n = sizeof(arr)/sizeof(int) ;
	int k = 3 ;
	cout << solve(arr , n , k) << "\n" ;
}
