#include <bits/stdc++.h>

using namespace std ;

void solve(int arr[][5] , int n , int m)
{
	int row = 0 , col = 0 ;
	int mn = min(m,n) ;
	bool row_trav = 0 ;
	
	for(int len = 1 ; len <= mn ; len++)
	{
		for(int i = 0 ; i < len ; i++)
		{
			cout << arr[row][col] << " " ;
			
			if(i + 1 == len)
			break ;
			
			if(row_trav)
			{
				++row ; --col ; 
			}
			else
			{
				--row ; ++col ;
			}
		}
		if (row_trav)
            ++row, row_trav = false;
        else
            ++col, row_trav = true;
	}
	
	if (row == 0) {
        if (col == m - 1)
            ++row;
        else
            ++col;
        row_trav = 1;
    }
    else {
        if (row == n - 1)
            ++col;
        else
            ++row;
        row_trav = 0;
    }
 
}

int main()
{
	int arr[5][5] = { {1,2,6,7,15},
					  {3,5,8,14,16},
					  {4,9,13,17,22},
					  {10,12,18,21,23},
					  {11,19,20,24,26}
	                 } ;
	solve(arr,5,5) ;
}
