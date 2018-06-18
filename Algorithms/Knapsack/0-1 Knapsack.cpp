#include<bits/stdc++.h>

using namespace std ;

void solve(int limit , int *value , int *weights,int n)
{
	int sol[n+1][limit + 1] ;
	 
	for(int i = 0 ; i < n ; i++)
	  for(int j = 0 ; j < limit ; j++)
	  {
	  if(i == 0 || j == 0)
	    sol[i][j] = 0 ;
	  else if(weights[i-1] <= limit)
	     sol[i][j] = max(value[i-1] + sol[i-1][j-weight[i-1]] ,sol[i-1][j]) ;
	  else
        sol[i][j] = K[i-1][j];
      }
      return sol[n][limit] ;
}

int main()
{
	int limit = 50;
	int value[3] = {60,100,120} ;
	int weights[3] = {10,20,30} ;
	int n = 3 ;
	
	solve(limit,&value,&weights,n) ;
	
}
