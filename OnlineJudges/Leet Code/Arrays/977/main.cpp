/*
  Problem will be solved using two pointers
*/
#include<bits/stdc++.h>

using namespace std ;

void swap(int *a , int *b)
{
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

int main()
{
	int arr[] = {-4,-1,0,3,10} ;
	int size = sizeof(arr)/ sizeof(int) ;
	int j = 0 , i = 0 ;
	
	while(j < size && arr[j] < 0)
	  j++ ;
	
	i = j - 1 ;
	
	while(i >= 0 && j < size)
	{
		
		if(arr[i] * arr[i] < arr[j] * arr[j])
		{
		   
	    }
	    else
	     {
	        
		 }
	}
	for(int atr : arr)
	  cout << atr << " " ;
}
