/*
    Find the Rotation Count in Rotated Sorted array
    https://www.geeksforgeeks.org/find-rotation-count-rotated-sorted-array/
*/

#include<bits/stdc++.h>

using namespace std ;

int findMinimumElement(vector<int> *vec , int l , int r)
{
	if(l == r)
	 return r ;
	
	if(r < l)
	 return 0 ;
	 
	 int mid = l + (r - l) / 2 ;
	 
	 if(mid < r && vec -> at(mid + 1) < vec -> at(mid))
	  return mid + 1 ;
	  
	 if(mid > l && vec -> at(mid - 1) < vec -> at(mid))
	  return mid - 1 ;
	 
}

int main()
{
   vector<int> vec = {15, 18, 20, 3, 6, 12} ;
   int n = vec.size() ;
   int l = 0 ;
   cout << findMinimumElement(&vec , l , n) ;
}
