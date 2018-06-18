#include <bits/stdc++.h>

using namespace std ;

int main()
{
	long int n , k , x , m ;
	vector<long int> chores ;
	cin >> n >> k >> x ;
	for( int i = 0 ; i < n ; i++)
	{
		cin >> m ;
		chores.push_back(m) ;
	}
	int sum = 0 ;
	sum += k * x ;
	n -= k ;
	int i = 0 ;
	while(n != 0)
	{
		sum += chores[i];
		n-- ;
		i++ ;
		
	}
	cout << sum << endl ;
}
