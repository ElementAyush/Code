#include <bits/stdc++.h>

using namespace std ;

int solve(vector<int> vec)
{
	int count = 0 ;
	map<long , long> keyPair ;
	for(int i = 0 ; i < vec.size() ; i++)
	  keyPair[vec[i]] = i ;
	  
	vector<int> sorted ;
	sorted = vec ; 
	sort(sorted.begin() , sorted.end()) ;
	
	
	for(int i = 0 ; i < vec.size() ; i++)
	{
	  if(vec[i] != sorted[i])
	   count++ ;
	   
	int tempSwap = keyPair[sorted[i]] ;
	keyPair[vec[i]] = keyPair[sorted[i]] ;
	vec[i] = sorted[i] ;
	vec[tempSwap] = vec[i] ;
     }
     return count ;
}

int main()
{
  int n = 4 ;
  vector<int> vec = {2,5,3,1} ;
  
  cout << solve(vec) << "\n" ;
  
  reverse(vec.begin() , vec.end()) ;
  cout << solve(vec) << "\n" ;
}
