#include<bits/stdc++.h>

using namespace std ;

int solve(vector<int> & arr)
{
	int maxArea = 0  , l = 0 , r = arr.size() - 1;
	while(l < r)
	{
		maxArea = max(maxArea , min(arr[l] , arr[r]) * (r - l));
		if(arr[l] < arr[r])
		  l++ ;
		else
		  r-- ;
	}
	
	return maxArea ;
}

int main()
{
	vector<int> arr = {1,8,6,2,5,4,8,3,7} ;	
	cout << solve(arr) << endl ;
	arr.clear() ;
	arr = {1,1,3,2} ;
	cout << solve(arr) ;
}
