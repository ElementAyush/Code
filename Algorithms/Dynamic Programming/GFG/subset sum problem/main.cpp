/*
   https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
*/
#include<bits/stdc++.h>

using namespace std ;

bool isSetPresent(int *set ,int sum ,int n) 
{
	if(sum > 0 && n == 0)
	 return 0 ;
	if(sum == 0)
	 return 0 ;
	 
	if(set[n - 1] > sum)
	 return isSetPresent(set , sum , n) ;
	
}

int main()
{
	int set[] = {3, 34, 4, 12, 5, 2}, sum = 9 ;
	int n = sizeof(set)/sizeof(int) ;
	
	cout << isSetPresent(set , sum , n) ;
}
