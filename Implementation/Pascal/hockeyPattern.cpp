/* Hockey Stick Pattern in pascal triangle*/

#include <bits/stdc++.h>

using namespace std ;

const int len = 6 ;
int pttr[len][len] ;

int Factorial(int n)
{
	if(n <= 0) 
	 return 1 ;
	 
	int result = 1 ;
	for(int i = n ; i > 0 ; i--)
	 result *= i ;
	 
return result ; 
}

void CreatingPattern()
{
	for(int line = 0 ; line < len ; line++)
	{
		for(int i = 0 ; i <= line ; i++)
		{
			if(line == i || i == 0)
			  pttr[line][i] = 1 ;
			else 
              pttr[line][i] = pttr[line-1][i-1] + pttr[line-1][i];
             
            cout << pttr[line][i] << " " ;
		}
		cout << "\n" ;
	}
}

void CalculateRows(int num)
{
	int count = 0 ;
	vector<int> stick ;
	for(int i = 0 ; i < len ; i++)
	 {
	 	for(int j = 0 ; j < len ; j++)
	 	{
	 	   int m = i , n = j ;
	 	  if(pttr[m][n] == num)
		   {
		     	m-- ;
		     while(pttr[m][n]  != 1 )
			 {
			 	    stick.push_back(pttr[m][n]) ;
			    	count++ ;
			    	m-- ; n-- ;
			 }
			 break ;		
		   } 
		}
	 }
	 cout << count + 1 << "\n" ;
	  cout  <<  1  << " ";
	 for(int i = 0 ; i < stick.size() ; i++)
	   cout  <<  stick[i] << " "  ;
	cout << num ;
}

int main()
{
	CreatingPattern();
 	int num = Factorial(len - 1 ) / (Factorial(3) * Factorial(len - 1 - 3)) ;
	cout << endl ;
	CalculateRows(num) ;
}
