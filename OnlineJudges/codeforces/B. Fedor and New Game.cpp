#include <bits/stdc++.h>

using namespace std ;

int num_of_one(int num)
{
	int count = 0 ;
	while(num)
	{
		num = (num & num-1);
		count++ ;
	}
return count ;	
}

int main()
{
	int m , n , k ;
	cin >> n >> m >> k ;
	
	vector<int> num_of_1 ;
	int j ;
	for(int i = 0 ; i <= m ; i++)
	{
		cin >> j ;
	    num_of_1.push_back(num_of_one(j)) ;	
	    cout << "=====" << num_of_1[i] << "\n" ;
	}
	
	int count = 0 ;
	 for(int i = 0 ; i <= m ; i++)
	{
		cout << abs(num_of_1[m] - num_of_1[i]) << "\n"; 
	    if(abs(num_of_1[m] - num_of_1[i]) <= k ) 
		  count++;	
	}
	cout << count - 1 << "\n" ;
}
