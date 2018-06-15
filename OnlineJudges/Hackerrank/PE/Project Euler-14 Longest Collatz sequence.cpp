#include <bits/stdc++.h>

using namespace std ;

map<int,int> cache ;

int calSequence(long long int num)
{
	if(cache.find(num) != cache.end())
	 return cache[num] ;
	 
	else
	{
		int x = 0 , y = 0 ;
	  if(num % 2 == 0)
	   x = 1 + calSequence(num / 2) ;
	  else
	   y = 1 + calSequence(3 * num + 1) ;
	   
	   cache[num] = x + y ;
	}
	
	return cache[num] ;
}

int main()
{
	cache[0] = 0 ;
    cache[1] = 1 ;
    
    for(int i = 2 ; i <= 10000 ; i++)
      calSequence(i) ;
    
    int test_case ;
    cin >> test_case ;
    while(test_case--)
    {
    long long int n ;
    cin >> n ;
    int max = 0 , k , count;
    for(int i = 2 ; i <= n ; i++)
    {
      count = calSequence(i) ;
      if(count >= max)
      {
       max = count ;
       k = i ;
      }
	}
	cout << k << "\n" ;
   }  
}
