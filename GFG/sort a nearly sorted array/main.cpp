#include <bits/stdc++.h>

using namespace std ;

void sort(int *arr , int arr_size , int k)
{
	priority_queue< int , vector<int> , greater<int> > pq(arr , arr + k + 1) ;
	int index = 0 ;
	
	for(int i = k + 1 ; i < arr_size ; i++)
	{
		arr[index++] = pq.top() ;
		pq.pop() ;
		pq.push(arr[i]) ;
	}
   
    while(!pq.empty())
	{
	  arr[index++] = pq.top() ;
	  pq.pop() ;
	}	
	
}

void print(int *arr , int arr_size)
{
	for(int i = 0 ; i < arr_size ; i++)
	 cout << arr[i] << " " ;
}

int main()
{
	int arr[] = {6, 5, 3, 2, 8, 10, 9} ;
	int k = 3 ;
	int arr_size = sizeof(arr) / sizeof(int) ;
	
	sort(arr , arr_size , k) ;
	print(arr , arr_size) ;
}
