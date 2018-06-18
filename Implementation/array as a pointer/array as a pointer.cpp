/* -- Returning array from a function -- */
#include<bits/stdc++.h>

using namespace std ;

void ret(int *p)
{
p[0] = 2 ;
p[1] = 7 ;
p[2] = 8 ;
}

int main()
{
	int m = 6 ;
	int arr[m] ;
	ret(arr) ;
	cout << arr[2] ;
}
