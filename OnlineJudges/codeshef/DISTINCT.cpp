#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int test_case ;
	cin >> test_case;
	while(test_case--)
	{
		int n ; 
		cin >> n ;
		string arr[n] ;
		vector<string> v ;
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i] ;
		sort(arr, arr+n) ;
		int count = 0 ;
		for(int i = 0 ; i < n ; i++)
		{
			while(i < n-1 && arr[i] == arr[i+1])
			 i++;
			count++ ;
			v.push_back(arr[i]) ;
		}
		cout << count << endl ;
		for(int i = 0 ; i < n ; i++)
		 cout << v[i] << endl ;	
		
	}
}
