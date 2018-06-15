#include <bits/stdc++.h>

using namespace std ;

int main()
{
	map<char,int> myStr ;
	map<char,int> :: iterator it ;
	
	string s = "sssssaaaabbbbfffhhhsddddlljjeetttnnnnkoq" ;
	for(int i = 0 ; i < s.length() ; i++)
	{
		it = myStr.find(s[i]) ;
		if(it == myStr.end())
		  myStr[s[i]] = 1 ;
		else
		{
		 int count = myStr.find(s[i]) -> second ;
		 myStr[s[i]] = count + 1 ;
	    }
	}
	for(it = myStr.begin() ; it != myStr.end() ; it++)
	{
		cout << it -> second << it -> first;
	}
	
	return 0 ;
}
