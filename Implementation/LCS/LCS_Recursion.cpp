#include<bits/stdc++.h>

using namespace std ;

int LCS(string s1 , int lens1, string s2 , int lens2)
{
	if(lens1 == 0 || lens2 == 0)
	 return 0 ;
	 
	if(s1[lens1 - 1] == s2[lens2 - 1])
	 return 1 + LCS(s1 , lens1 - 1 , s2 , lens2 - 1) ;
	 
	if(s1[lens1 - 1] != s2[lens2 - 1])
	 return max(LCS(s1 , lens1 , s2 , lens2 - 1) , LCS(s1 , lens1 - 1 , s2 , lens2)) ;
}

int main()
{
	string s1 , s2 ;
	cin >> s1 >> s2 ;
	int lens1 = s1.length() ;
	int lens2 = s2.length() ;
 	cout << LCS(s1 , lens1 , s2 , lens2) << "\n" ;
}
