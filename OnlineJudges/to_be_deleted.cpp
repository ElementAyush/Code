#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int R = 2, C = 2, r0 = 0, c0 = 1 ;
	vector< vector<int>> temp ;
	map<pair<int,int> , int> temp_map ;
	
	for(int i = 0 ; i < R ; i++)
	{
		for(int j = 0 ; j < C ; j++)
		{
			int sum = abs(r0 - i) + abs(c0 - j) ;
			
			temp_map[make_pair(i , j) ] = sum;
		}
	}
	map<pair<int,int> , int>::iterator itr;
	for(itr = temp_map.begin(); itr != temp_map.end(); ++itr)
	{
		cout << itr -> second << endl ;
	}

}
