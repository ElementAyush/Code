/* 
https://www.geeksforgeeks.org/ugly-numbers/
*/

#include<bits/stdc++.h>

using namespace std ;

int findNthUglyNumber(int n , vector<int> *vec)
{
	if(n == 1)
	 return vec[1] ;
	
	if(vec[n] != 0)
	 return vec[n] ;
	 
    if(n % 2 == 0)
       findNthUglyNumber(n / 2 , vec) ;
}

int main()
{
	int n = 11 ;
	vector<int> vec(n + 1) ;
	vec[0] = 0 ;
	vec[1] = 1 ;
	cout << findNthUglyNumber(n vec) ;
}
