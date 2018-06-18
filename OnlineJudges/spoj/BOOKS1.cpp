#include <bits/stdc++.h>

using namespace std ;

int main()
{
//	vector<int> vec = {100 , 200 , 300 , 400 , 500 , 600 , 700 , 800 , 900} ;
//	int m = 9 , k = 3 ;
    vector<int> vec = {100 , 100 , 100 , 100 , 100} ;
    int m = 5 , k = 4 ;
	long int sum = 0 ;
	for(int i = 0 ; i < m ; i++)
	 sum += vec[i] ;
	 
	long int reqSum = sum / k ;
	cout << reqSum << "\n" ;
	
	long int tilSum = 0 ;
	int j = 0 ;
	while(j < m)
	{  tilSum = 0 ;
	for(int i = j ; i < m ; i++)
	{
		tilSum += vec[i] ;
		if(tilSum > reqSum)
		{
			if(j == 0)
			{
			 for(int m = j ; m < i ; m++)
		    {
		 	cout << vec[m] << " ";
		    }
		    j = i  ;
		     k-- ;
		      break ;	
			}
			else
			{
				for(int m = j ; m < i ; m++)
		    {
		 	cout << vec[m] << " ";
		    }
		    j = i + 1 ;
		     k-- ;
		      break ;
			}
		 for(int m = j ; m <= i ; m++)
		 {
		 	cout << vec[m] << " ";
		 }
		 j = i + 1 ;
		 k-- ;
		 break ;
	   }
	}
	cout << " " << "/" << " ";
	if(k == 1)
	{
		for(int i = j - 1 ; i < m ; i++)
		 cout << vec[i] << " ";
		j = m ;
	}
   }
}
