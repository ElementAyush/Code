#include<bits/stdc++.h>

using namespace std ;

int numOfOperations(int num)
{
	int result = 0 ;
	result += n/5 ;
	n %= 5 ;
	
	result += n / 3 ;
	n %= 3 ;
	
	result += 1
}

int main()
{
	int test_cases , n , k;
	vector<int> choco ;
	cin >> test_cases ;
	
	while(test_cases--)
	{
		cin >> n ;
		int smallestNumber = INT_MAX ;
		for(int i = 0 ; i < n ; i++)
		{
			cin >> k ;
			choco.push_back(k) ;
			
			if(k < smallestNumber)
			  smallestNumber = k ;
		}
	cout << minNumOfOperations(&choco , n) << "\n";
	choco.clear() ;
	}
}
