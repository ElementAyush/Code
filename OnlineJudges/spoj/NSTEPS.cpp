#include <bits/stdc++.h>

int main()
{
	int test_case ;
	std :: cin >> test_case ;
	
	while(test_case--)
	{
		int x , y ;
		std :: cin >> x >> y ;
		if( ( x < y ) || ( x % 2 == 0 && y % 2 == 1 ) || ( x % 2 == 1 && y % 2 == 0) ) std :: cout << "No Number" << "\n";
		else if(x % 2 == 0 && x % 2 == 0) std :: cout << x + y << "\n";
		else if(x % 2 == 1 && x % 2 == 1) std :: cout << x + y - 1 << "\n";
	}
}
