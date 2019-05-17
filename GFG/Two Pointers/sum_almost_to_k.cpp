/*
    Given a sorted array and a number x, 
	find the pair in array whose sum is closest to x
*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{
	vector<int> vec = {10, 22, 28, 29, 30, 40} ;
	int min_diff = INT_MAX ;
    int i = 0 , j = vec.size() - 1 , x = 54 , l = 0 , r = 0;
	
	while(i < j)
	{
	  if(abs(vec[i] + vec[j] - x) < min_diff)
	  {
	   min_diff	= abs(vec[i] + vec[j] - x) ;
	   l = vec[i] ;
	   r = vec[j] ;
      }
      
      if(vec[i] + vec[j] < x)
       i++ ;
      
      if(vec[i] + vec[j] > x)
       j-- ;
	}  
	
	cout << l << " " << r <<  ;
}
