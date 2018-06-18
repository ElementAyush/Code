#include <bits/stdc++.h>

using namespace std ;

void merge(int v[] , int low , int mid ,int high)
{
	int l1 = mid - low + 1 ;
	int r1 = high - mid ;
	int left[l1];
	int right[r1] ;
	
	for(int i = 0 ; i < l1 ; i++)
	  left[i] = v[low+i] ; 
	for(int i = 0 ; i < r1 ; i++)
	  right[i] = v[mid+1+i] ; 
	  int i = 0 , j = 0 , k = low ;
	  
	while(i < l1 > 0 && j < r1)
	{
		if(left[i] <= right[j])
		{
			v[k] = left[i];
			i++ ;
			k++ ;
		}
		if(left[i] > right[j])
		{
			v[k] = right[j];
			j++ ;
			k++ ;
		}
	}
	
	while(i < l1)
	{
		v[k] = left[i] ;
		i++ ;
		k++ ;
	}
		while(j < r1)
	{
		v[k] = right[j] ;
		j++ ;
		k++ ;	
	}
	
}

void mergeSort(int arr[] , int low , int high)
{
	if(low < high)
	{
	int mid = (low + high)/ 2 ;
	mergeSort(arr,low,mid) ;
	mergeSort(arr,mid+1 , high) ;
	merge(arr,low,mid,high) ;
  }
}

void print(int arr[] , int s)
{
	for(int i = 0 ; i < s ; i++)
	   cout <<  arr[i]  << " ";
}
int main()
{
	int arr[10] ;
	for(int i = 10 ; i > 0 ; i--)
	 arr[10-i] = i ;
	 int arr_size = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr,0,arr_size);
	print(arr,arr_size) ;
	return 0 ;
}
