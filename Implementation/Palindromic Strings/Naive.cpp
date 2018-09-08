#include <bits/stdc++.h>

using namespace std ;

int main()
{
	string s = "aba" ;
	int ans = 0 , len = s.length() ;
	for(int i = 0 ; i < 2*len - 1 ; i++)
	{
		int left = i / 2 ;
		int right = left + i % 2 ;
		while(left >= 0 && right <= len && s[left] == s[right])
		{
			ans++ ;
			left-- ;
			right++ ;
		}
	}
	cout << ans << endl ;
}
