#include <bits/stdc++.h>

using namespace std ;

vector <int> result ;

int main()
{
	
	int n , test_case;
	cin >> test_case;
	
	while(test_case--)
	{
	cin >> n ;
     result.push_back(1) ; 
	for(int a = n ; a >= 1 ; a--)
	{
		int x = 0 , temp = 0 , vecSize = result.size() , k = 0 ;
		while(k != vecSize)
		{
			x = result[k] * a + temp ;
			result[k] = x  % 10 ;
			temp = x / 10 ; 
			k++ ;
		}
		while(temp > 0)
		{
			int t = temp % 10 ;
			result.push_back(t) ;
			temp /= 10 ;
		}
	}
	
	for(int i = result.size() - 1 ; i >= 0 ; i--)
	 cout << result[i] ;
	 cout << "\n" ;
	 result.clear() ;
}
}
