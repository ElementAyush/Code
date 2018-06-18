#include <bits/stdc++.h>

using namespace std ;

class Bullets
{
	public:
		int match(vector <string> guns, string bullet) ;
		bool isPresent(string s1 , string s2) ;
} ;

bool Bullets :: isPresent(string s1 , string s2)
{
	return (s1.length() == s2.length()) && ((s1+s1).find(s2) != string :: npos) ;
}

int Bullets :: match(vector <string> guns, string bullet)
{
	for(int i = 0 ; i < guns.size() ; i++)
	{
		bool flag = isPresent(guns[i] , bullet) ;
		if(flag == true)
		 return i ;
	}
	
	return -1 ;
}

int main()
{
	vector <string> guns = {"|| || ||","| | | | ","||| ||| ","||||||||"} ;
	string bullet = "|| ||| |" ;
	
	Bullets b ;
	cout << b.match(guns,bullet) ;
}

