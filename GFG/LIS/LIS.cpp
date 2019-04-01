#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 }; 
	int arr_size = sizeof(arr) / sizeof(int) ;
	int length[arr_size] , sub[arr_size] ;
	for(int i = 0 ; i < arr_size ; i++)
	 length[i] = 1 ;
	
	for(int i = 1 ; i < arr_size ; i++)
	{
		for(int j = 0 ; j <= i ; j++)
		{
			if(arr[j] < arr[i])
			{
				length[i] = max(length[j] + 1 , length[i]) ;
				sub[i] = j ;
			}
		}
	}
	
	for(int i = 0 ; i < arr_size ; i++)
	 cout << length[i] << " " ;
}
