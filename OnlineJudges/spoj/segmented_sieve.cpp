/* -- Segmented Sieve -- */
#include <bits/stdc++.h>

using namespace std ;

int num = 1000000000 ;
int sqrtnum = int(ceil(sqrt(num))); 
vector <int> primes ;


void compute()
{ 
  bool mark[sqrtnum + 1] ;
  memset(mark , true , sizeof(mark)) ;
  for(int i = 2 ; i <= sqrt(sqrtnum) ; i++)
  {
  	for(int j = i*2 ; j <= sqrtnum ; j += i)
  	{
  	  if(mark[j] == true)
		mark[j] = false ;	
	}
  }
  
  for(int i = 2 ; i <= sqrtnum ; i++)
   if(mark[i] == true)
     primes.push_back(i) ;
}

int main()
{	
  compute() ;
  int n , m ;
  cin >> n >> m ;
  bool mark[m-n +1] ;
  memset(mark , true , sizeof(mark)) ;
  
  	for(int i = 0 ; primes[i] <= sqrt(m) ; i++)
  	{
  		int startLimit = floor(n / primes[i])  * primes[i] ;
  		if(startLimit < n )
  		  startLimit += primes[i] ;
  		 for(int j = startLimit ; j <= m ; j += primes[i])
  		 {
  		     mark[j-n] = false ;
  	     }
	}
	for(int i = n ; i <= m ; i++)
	   if(mark[i-n] == true)
	   cout << i << endl ;
}
