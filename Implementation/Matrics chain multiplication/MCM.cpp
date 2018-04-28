/*--- Matrics chain multiplication recursion ---*/

#include<bits/stdc++.h>

int MCM(int p[] , int i , int j)
{
	
	if(i == j) return 0 ;
	int min = INT_MAX ;
	int count ;
	for(int k = i ; k < j ; k++)
	{
	  count = MCM(p , i , k) + MCM(p , k + 1 , j) + p[i - 1] * p[j] * p[k] ;
	  if(count < min)
	   min = count ;
	}
	
	return min ;
}


int main()
{
	int arr[] = {40, 20, 30, 10, 30} ;
	
	int cal = MCM(arr , 1 , 4) ;
	std :: cout << cal << "\n" ;
}
