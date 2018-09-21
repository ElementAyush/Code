#include <bits/stdc++.h>

using namespace std ;

 vector<int> result ;

int main()
{
	int test_case ;
	cin >> test_case ;
 while(test_case--)
	{
      result.push_back(1) ;
      int n ;
      cin >> n ;

 for(int i = n ; i > 1 ; i--)
 {	
  long long int x = 0 , temp = 0 , k = 0 ;
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
 
    long long int sum = 0 ;
 for(int i = result.size() - 1  ; i > 0 ; i--)
 { 
  sum += result[i] ;
 }
  if(n == 0 || n == 1)
    sum = 1 ;
  if(n == 2) 
    sum = 2 ;
  if(n == 3)
    sum = 6 ;
    
  cout  << sum << "\n" ;
  	result.clear() ;
}
	return 0 ;
}
