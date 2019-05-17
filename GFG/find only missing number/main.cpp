/*
   Find the only missing number in a sorted array
   https://www.geeksforgeeks.org/check-if-a-word-exists-in-a-grid-or-not/
*/
#include<bits/stdc++.h>

using namespace std ;

int findMissingElement(vector<int> *vec , int n)
{
	int l = 0 , r = n  ;
	while(l <= r)
	{
		int mid = (l + r)/ 2 ;
		if(vec -> at(mid) != mid + 1 && vec -> at(mid - 1) == mid)
		 return mid + 1 ;
		
		if(vec -> at(mid) != mid + 1)
		 r = mid - 1 ;
		
		else
		  l = mid + 1 ; 
	}
	return - 1 ;
}
int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 7, 8}; 
	int n = vec.size() ;
	cout << findMissingElement(&vec , n) << "\n" ;
}
