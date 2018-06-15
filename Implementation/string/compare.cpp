/*
String compare function gives following output
<0 when 1st string is smalles or first occurance ofthe string comes smaller than the other
=0 strings are equal
>0 when 1st string greater than the other
*/
#include<bits/stdc++.h>

int main()
{
	std::string s1 = "a" ;
	std::string s2 = "za" ;
	std::cout << s2.compare(s1) ;
}
