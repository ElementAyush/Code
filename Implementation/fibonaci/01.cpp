#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int lim = 10 ;
	int a = 0 , b = 1 , c ;
	for(int i = 1 ; i <= lim ; i++)
	{
		c = a + b ;
		cout << c << " " ;
		a = b ;
		b = c ;
	}
}
