#include<bits/stdc++.h>

using namespace std ;

int main()
{
	vector<int> vec = {10, 20 , 35 , 50 , 75 , 80} ;
	int i = 0 , j = vec.size() - 1 , x = 70 ;
	
	while(i < j)
	{
	  if(vec[i] + vec[j] == x)
	  {
	   cout << vec[i] << "  " << vec[j] << "\n" ;
	   break ;
      }
	  
	  if(vec[i] + vec[j] > x)
	     j-- ;
	  
	  if(vec[i] + vec[j] < x)
	    i++ ;  	
	} 
}
