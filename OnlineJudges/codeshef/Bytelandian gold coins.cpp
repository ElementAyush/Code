#include <bits/stdc++.h>

using namespace std ;

map<long long , long long> fact;

long long solve(long long n)
{
	if(n < 12)
	  return n ;
	if(fact.find(n) != fact.end())
	 return fact[n] ;
	 
	long long x = solve(n/2) + solve(n/3) + solve(n/4) ;
	fact[n] = x ;
	
	return x ;
	  
}

int main()
{
	long long n ;
	while(cin >> n)
	cout << solve(n) << "\n";
}
