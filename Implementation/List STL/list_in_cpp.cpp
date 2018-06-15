#include <bits/stdc++.h>

using namespace std ;

int main()
{
	list<int> myList[5] ;
	myList[2].push_back(10) ;
	myList[2].push_back(8) ;
	myList[1].push_back(6) ;
	myList[4].push_back(1) ;
	myList[0].push_back(10) ;
	myList[1].push_back(5) ;
	
	list<int> :: iterator j ;
	
	for(int i = 0 ; i < 5 ; i++)
	{
		for(j = myList[i].begin() ; j != myList[i].end() ; j++ )
		{
			cout << i << "-->" << *j << " ";
		}
		cout << endl ;
	}
	
	return 0 ;
}
