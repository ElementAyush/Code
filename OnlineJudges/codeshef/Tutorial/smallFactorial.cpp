#include <bits/stdc++.h>

using namespace std ;

 vector<int> result ;

int main()
{
result.push_back(1) ;
int n ;
cin >> n ;
 for(int i = n ; i >= 1 ; i--)
 {	
   int x = 0 , temp = 0 , k = 0 ;
   int vecSize = result.size() ;
    while(k < vecSize)
 	{
 		
 	    x = result[k] * i + temp ;
		result[k] = x % 10 ;
		temp =  x / 10 ;
		k++ ;	
	}
	
	while(temp > 0)
	{
		result.push_back(temp % 10) ;
		temp /= 10 ;
	}
 }
 
 for(int i = result.size() - 1  ; i >= 0 ; i--)
  cout << result[i] ;
	
	return 0 ;
}
