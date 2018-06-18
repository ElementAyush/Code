/* --  using qsort function for sorting array of strings -- */
#include <bits/stdc++.h>

using namespace std ;


int main()
{
	
	vector <string> str ;
	str.push_back("zazy") ;
	str.push_back("rred") ;
	str.push_back("killme") ;
	str.push_back("pikachu") ;
	str.push_back("ayush") ;
	
	sort(str.begin() , str.end()) ;
	
	for(int i = 0 ; i < str.size() ; i++)
	{
		cout << str[i] << " " ;
	}
}
