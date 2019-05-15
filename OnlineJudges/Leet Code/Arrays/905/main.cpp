#include<bits/stdc++.h>

using namespace std ;


void calculate(vector<int> &A)
{
  int start = 0 , end = A.size() - 1 , k = 0 ;

 while(start <= end)
 {
 	
 	if(A[start] % 2 != 0)
 	{
 		swap(A[start] , A[end--]) ;
 	}
 	else
 	 start++ ;
 } 
}

void print(vector<int> &A)
{
  for(int i : A)
  	cout << i << " " ;
}

int main()
{
	vector<int> A = {5,6,3,1,2,4,7} ;
	calculate(A) ;
	print(A) ;
}
