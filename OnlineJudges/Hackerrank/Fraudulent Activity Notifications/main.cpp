#include<bits/stdc++.h>

using namespace std ;

int freq[201] ;
 

float giveMeTheNewMedian(int d)
{
   	int prefix[201] ;
   	prefix[0] = freq[0] ;
   	for(int i = 1 ; i < 201 ; i++)
   		prefix[i] = prefix[i - 1] + freq[i] ;
   	
   	float median = 0.0 ;
   	
   	int a = 0, b = 0;
   	int i = 0 ;
   	if(d % 2 == 0)
   	{
   	  int first = d / 2 ;
	  int second = first + 1 ;
	  for(; i < 201 ; i++)
	   if(first <= prefix[i])
		 {
		 	a = i ; break ;
		 }
	  for(; i < 201 ; i++)
	   if(second <= prefix[i])
		 {
		 	b = i ; break ;
		 }	  	
	}
	else
	{
		int first = d / 2 + 1 ;
		for(int i = 0 ; i < 201 ; i++)
		 if(first <= prefix[i])
		 {
		 	a = i ; break ;
		 }
	}
	
	return a + b ;
}

int solve(vector<int> exp , int d)
{
	// idea is to first sort the data upto d days and find the median 
	// then after d days compare the spending weather it is >= 2x and increace the count

}

int main()
{
	
    vector<int> vec = {1,2,3,4,4} ;
	int d = 4 ;
	int n = 5 ;
    int count = 0 ;
	 	
	for(int i = 0 ; i < d ; i++)
	 freq[vec[i]]++ ;
    
    float median = giveMeTheNewMedian(d) ;
    
    vec[d] >= 2 * median ? count++ : count = 0;
    
    for(int i = d + 1 ; i < n ; i++)
    {
    	 freq[vec[i - d + 1]]-- ;
    	 freq[vec[i]]++ ;
    	 float median = giveMeTheNewMedian(d) ;
    	if(vec[i] >= 2 * median)
    	 count++ ;	
	}
	cout << count << endl ;
    
	//for(int i = d ; i < n ; i++)
//	cout << solve(&vec , d) << endl ;
//	vec.clear() ;
//	vec = {1,2,3,4,4} ;
//	d = 4 ;
//	cout << solve(&vec , d) << endl ;
}
