#include <bits/stdc++.h>

using namespace std ;

int main()
{
	/* --  normal pointer initialization -- */
	int var = 10 ;
	int *ptr ;
	ptr = &var ;
	cout << *ptr << endl ;
	
	/** -- Pointer to the pointer -- */
	
	int big = 10 ;
	int *var1 = &big ;
	int **ptr1 = &var1 ;
	cout << var1 << " " << *var1 << " " << ptr1 << " " << *ptr1 << " " << **ptr1 << endl ;  
	
	
}
