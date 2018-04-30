#include <bits/stdc++.h>

using namespace std ;

int n ;

bool check(int num1)
{
  int k = 0 ;
  int num = num1 ;
  while(num != 0)
  {
    k += pow((num % 10) , n) ;
	num /= 10 ;	
  }	
  
  if(k == num1)
   return true ;
   
return false ;
}

void solve(int n)
{
	long long count = 0 ;
	for(long long int i = 1 ; i < 1000000 ; i++)
	{
		if(check(i))
		 count += i  ;
	}
	cout << count << "\n" ;
}

int main()
{
	cin >> n ;
	solve(n) ;
}
