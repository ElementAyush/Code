#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int arr[] = {1,2,3,4} ;
	int n = sizeof(arr)/sizeof(int) ;
	int count1 = 0 ;
	for(int i = 0 ; i < n - 2 ; i++)
	{
		int d = arr[i + 1] - arr[i] ;
		for(int j = i + 2 ; j < n ; j++ )
		{
		  if(arr[j] - arr[j - 1] == d)
		   count1++ ;
		  else
		   break ;
		}
	}
	cout << count1 ;
}
