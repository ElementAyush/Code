/*  Segmented Sieve algorithm  */
#include <bits/stdc++.h>

using namespace std ;

int num = 1000000000 , sqrtnum = ceil(sqrt(num));
vector<int> primes;

void normal_sieve(int limit)
{
	bool arr[limit + 1] ;
	memset(arr , true , sizeof(arr)) ;
	
	for(int i = 2 ; i <= sqrt(limit) ; i++)
	{
	  if(arr[i] == true )
		for(int j = i*2 ; j  <= limit ; j += i)
			 arr[j] = false ;
	}
	
	for(int i = 2 ; i <= limit ; i++)
	{
		if(arr[i] == true)
		 primes.push_back(i) ;
	}
}

int main()
{
  normal_sieve(sqrtnum) ;
  
  int n , m ;
  cin >> n >> m ;
  while(n < m)
  {
  	bool mark[m + 1] ;
  	memset(mark , true , m) ;
  	
  	for(int i = 0 ; i < primes.size() ; i++)
  	{
  	// int toLim = floor(n/primes[i]) * primes[i] ;
  	   // if(toLim < n)
  	    // toLim += primes[i] ;
  	    for(int j = n ; j <= m ; j += primes[i])
  	    {
  	    	cout << primes[i] << "----" << j << endl ;
  	    	mark[j - n] = false ;
		} 
    }
    for(int i = n ; i <= m ; i++)
     if(mark[i - n] == true)
      cout << i << " " ;
    n += m ;
  }
  
}
