#include<bits/stdc++.h>

using namespace std ;

void printDiagonally(int arr[3][4] , int m , int n)
{
	//calculation technique for printing 
   // fron botton to up can be calculated by i - 1 , j + 1
	
	for(int i = 0 ; i < m ; i++)
	{
		int k = i , j = 0 ;
		while( k >= 0)
		{
			cout << arr[k][j] << " ";
			k-- ; j++ ;
		}
		cout << "\n" ;
	 } 
	 
	for(int j = 1 ; j < n ; j++)
	{
		int k = m - 1 , l = j ;
		while(l < n)
		{
		  cout << arr[k][l] << " ";
		  k-- ; l++ ;	
		}  
		cout << "\n" ;
	}
}

int main()
{
	int arr[3][4] ={
	{1 , 2 , 3 , 4},
	{5 , 6 , 7 , 8},
	{9 , 10 , 11 , 12}            
	} ;
	printDiagonally(arr , 3 , 4) ;
}
