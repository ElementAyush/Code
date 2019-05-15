#include<bits/stdc++.h>

using namespace std ;

void print(vector< vector<int> >A)
{
	for(vector<int> i : A)
	 {
	 	for(int j : i)
	 	 cout << j << " " ;
	 	cout << endl ;
	 }
	 
}
vector<vector<int> > flipArray(vector< vector<int> > A)
{
	int size = A.size() ;
	for(int i = 0 ; i < size ; i++)
	{
		int start = 0 , end = A[i].size() - 1 ;
		while(start < end)
		{
			A[i][start] = !A[i][start] ; A[i][end] = !A[i][end] ;
			swap(A[i][start++] , A[i][end--]) ;
		}
		A[i][start] ^= 1 ;
	}
	print(A) ;
	return A ;
}



int main()
{
	vector<vector <int> > A = {{1,1,0},{1,0,1},{0,0,0}} ;
	flipArray(A) ;
}
