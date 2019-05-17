#include<bits/stdc++.h>

using namespace std ;

int solve(vector<int> arr , int n)
{
	vector< pair <int , int> > calc(n) ;
	for(int i = 0 ; i < n ; i++)
	  {
	  	calc[i].first = arr[i] ;
	  	calc[i].second = i ;
	  }
	
	sort(calc.begin() , calc.end()) ;
	
	int count = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		if(calc[i].second == i)
		 continue ;
		else
		{
			swap(calc[i].first , calc[calc[i].second].first) ;
			swap(calc[i].second , calc[calc[i].second].second) ;
		}
		if(i != calc[i].second)
		 --i ;
		 
		count++ ;
	}
	
	return count ;
}


int main()
{
	vector<int> arr = {2,5,3,1} ;
	int n = arr.size();
	
	int asc = solve(arr , n) ; 
	reverse(arr.begin() , arr.end()) ;
	int des = solve(arr , n) ;  
	
	cout << asc << "  " << des << endl ;
}
