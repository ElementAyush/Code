#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int n , m ;
	cin >> n >> m ;
	if(n == 1)
	  cout << 1 << endl ;
	else if(n-m >= m)
	 cout << ++m << endl ;
	else
	 cout << --m << endl ;
	
}
