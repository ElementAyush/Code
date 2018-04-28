#include <bits/stdc++.h>

int main()
{
	int ed;
	std :: cin >> ed ;
	bool edges[ed] ;
	
	for(int i = 0 ; i < ed - 1 ; i++)
	 std :: cin >> edges[i] ; 
	int right[ed] , left[ed] ;
	right[ed - 1] = 1 ;
	for(int i = ed - 2 ; i >= 0 ; i--)
	{
		right[i] = left[i] = 1 ;
		if(edges[i])
		 right[i] += right[i + 1] ;
		else
		 left[i] += left[i+1] ;
	}
}
