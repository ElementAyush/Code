#include<bits/stdc++.h>

using namespace std ;

int solve(int *value, int *weights,int n,int capacity)
{
  if( n == 0 || capacity == 0)
   return 0 ;
   
   if(weights[n-1] > capacity)
    return (value,weights,n-1,capacity) ;
    
    return max(solve(value,weights,n-1,capacity) , value[n-1] + solve(value,weights,n-1,capacity-weights[n-1])) ;
     
}

int main()
{
	int value[3] = {60,100,120} ;
	int weights[3] = {10,20,30} ;
	int capacity = 50 ;
	int n = 3 ;
	
	cout << solve(value,weights,n,capacity) ;
}
