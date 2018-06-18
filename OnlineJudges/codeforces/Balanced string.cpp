#include<bits/stdc++.h>
using namespace std ;

int main()
{
	int n , x = 0 , y = 0 , ans = 0  ;
	map<int,int> m ;
	string s ;
	cin >> n >> s ;
	m[0] = -1 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(s[i] == '0') x++ ;
		else y++ ;
		if(m.count(y-x))
		  ans = max(ans,i-m[y-x]) ;
		else
		 m[y-x] = i ;
	}
	cout << ans << endl ;
}
