#include <bits/stdc++.h>

using namespace std ;

int total(int *arr,int n , int i)
{
	if(n < 0) 
	 return 0 ;
	
	if(n == 0)
	 return 1 ;
	 
	if((i == (sizeof(arr) / sizeof(int)) + 1) && n > 0)
	 return 0 ;
	 
	return total(arr,n - arr[i],i) + total(arr,n,i+1) ;
}

int main()
{
	int  n = 5 , arr[] = {1,2,3};
	cout << total(arr,n,0) ;
}
