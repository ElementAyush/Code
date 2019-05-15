#include <bits/stdc++.h>

using namespace std ;

int solve(vector<int> vec , int n)
{
	vector<pair<int , int> > map(n) ;
	
	for(int i = 0 ; i < n ; i++)
	{
		map[i].first = vec[i] ;
		map[i].second = i ;
	}
		
	sort(map.begin() ,map.end()) ;
	
	for(int i = 0 ; i < n ; i++)
	{
		if(map[i].second == i)
		  continue ;
		else
		{
			cout << map[i].first << "  " << map[map[i].second].first << "\n" ;
			cout << map[i].second << "  " << map[map[i].second].second << "\n" ;
		}
		if(i != map[i].second)
		 i-- ;
	}
	return 1 ;
}


int main()
{
	vector<int> vec = {2 ,5 ,3 ,1} ;
	int n = 4 ;
	
	cout << solve(vec , n) ;
}
