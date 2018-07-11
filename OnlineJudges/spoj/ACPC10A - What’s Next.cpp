#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int a , b , c ;
	cin >> a >> b >> c ;
	
	while(a || b || c)
	{
	  if(b - a == c - b)
	   cout << "AP " << c + (b - a) << "\n" ;
	  else
	   cout << "GP " << c * (b/a) << "\n" ;
	   
	   cin >> a >> b >> c ;
	} 
	
}
