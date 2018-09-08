#include<bits/stdc++.h>

using namespace std ;

int calculate(int *arr , int start , int end)
{
	if(start == end)
	 return 0 ;
	 
	 int k ;
	 for(k = start ; k < end ; k++)
	 {
	 	calculate(arr , start , k) + calculate(arr , k+1 , end) + arr[start - 1] * arr[k] * arr[end] ;
	 }
}

int main()
{
	int arr[] = {10 , 20 , 30 , 40} ;
	int n = sizeof(arr) / sizeof(arr[0]) ;
	
	cout << calculate(arr , 0 , n - 1)
	
}
