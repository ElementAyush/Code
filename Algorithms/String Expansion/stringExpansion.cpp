#include <bits/stdc++.h>

using namespace std ;

int main()
{
	string s = "3a14b6c7d" ;
	int  count = 0 ;
	
	for(int i = 0 ; i < s.length() ; i++)
	{
		if(s[i] >= 'a' && s[i] <= 'z')
		{
			for(int j = 0 ; j < count ; j++)
				cout << s[i] ;
			count = 0 ;
		}
		else
		{
			int num = (int)s[i]-48 ;
			count = (count * 10) + num ;
		}
	}
	
	return 0 ;
}
