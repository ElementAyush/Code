//minimum steps to reach end of array
#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} ;
	int n = sizeof(arr)/sizeof(int) ;
    int countOfSteps[n + 1] , steps[n + 1] ;
    
    countOfSteps[0] = steps[0] = 0 ;
    
    for(int i = 1 ; i < n ; i++)
    {
    	countOfSteps[i] = INT_MAX ;
    	for(int j = 0 ; j < i ; j++)
    	{
    	   if(i <= j + arr[j] && countOfSteps[j] != INT_MAX)
		    {
		      countOfSteps[i] = min(countOfSteps[i] , countOfSteps[j] + 1) ;
			  break ;		
		    } 	
		}
	}
	cout << countOfSteps[n - 1] << "\n" ;
    
}
