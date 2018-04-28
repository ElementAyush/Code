#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int test_cases , n ;
	vector<int> vec ;
	
	cin >> test_cases ;
	
	while(test_cases--)
	{
		cin >> n ;
		int k ;
		for(int i = 0 ; i < n ; i++)
		 {
		 	cin >> k ;
		 	vec.push_back(k) ;
		 }
		 
		 int hi = 0  , lo = 0 ; 
		 for(int i = 1 ; i < n ; i++)
		 {
		 	high_to_low = max(hi , hi + vec[i])
		 }
	}
}
