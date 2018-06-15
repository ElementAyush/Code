#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int test_case ;
	cin >> test_case ;
	
	while(test_case--)
	{
		string s ;
		cin >> s ;
		int sum = 0 ;
		for(int i = 0 ; i < s.size() ; i++)
		{
			sum += (int(s[i]) - 97) % 5 ;
		}
		cout << sum << endl ;
	}
}
