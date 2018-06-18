#include <bits/stdc++.h>

using namespace std ;

map<int,long long int> sol ;

long long int solve(int n)
{
	if(n == 0)
	  return 0 ;
	  
	if(sol[n] != 0)
	 return sol[n] ;
	 
	 long long int x = solve(n/2) + solve(n/3) + solve(n/4) ;
	 if(x > n)
	   sol[n] = x ;
	 else
	   sol[n] = n;
	 
	 return sol[n] ;
}

int main()
{
	int n ;
	while(cin >> n)
	{
		cout << solve(n) << "\n";
	}
}
