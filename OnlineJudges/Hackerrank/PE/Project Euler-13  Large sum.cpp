#include <bits/stdc++.h>

using namespace std ;

int main()
{
	vector<string> num ;
	vector<int> sum ;
	int l ;
	string k ;
	cin >> l ; 
	for(int i = 0 ; i < l ; i++)
	{
		cin >> k ;
		num.push_back(k) ; 
	}
	
	int strings = l - 1 ;
	int sSize = 49 ;
	
		int carry = 0 ;
	while(sSize >= 0)
	{
		int tSum = 0 ;
		int n = strings ;
		while(n >= 0)
		{
		  string s = num[n] ;
		  tSum += s[sSize] - '0' ;
		  n-- ;
		}
		tSum += carry ;
		sum.push_back(tSum % 10) ;
		carry = tSum / 10 ;
	sSize-- ;
	}
	
	while(carry > 0)
	{
		sum.push_back(carry % 10) ;
		carry /= 10 ;
	}
	
	for(int i = sum.size() - 1 ; i > sum.size() - 11 ; i--)
	  cout << sum[i] ;
	
}
