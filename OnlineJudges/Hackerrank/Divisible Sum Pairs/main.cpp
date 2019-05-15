#include<bits/stdc++.h>

using namespace std ;

int solve (int *arr , int k , int n)
{
	int f[k] ;
	memset(f , 0 , sizeof(f)) ;
	
	for(int i = 0 ; i < n ; i++)
	  ++f[arr[i] % k] ;
	  
	int sum = f[0] * (f[0] - 1) / 2 ;
	
	for(int i = 1 ; i <= k / 2 && i != (k - i ) ; i++ )
	  sum += f[i] * f[k - i] ;
	  
	if(k % 2 == 0) 
	 sum += (f[k/2] * (f[k/ 2] - 1) / 2 );
	 
	return sum ;
}

int main()
{

	int arr[6] = {2, 2, 1, 7, 5, 3};
	int k = 4 ;
	cout << solve(arr, k , 6) ;
	 
}
