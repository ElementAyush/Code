#include <bits/stdc++.h>

using namespace std ;

int arr[5000001] ;

int compute(long long int num)
{
  if(arr[num] > -1)
   return arr[num] ;
   
   if(num % 2 == 0)
    return 1 + compute(num / 2) ;
   else
    return 1 + compute(3 * num + 1) ;
	
return arr[num] ;	
}

int main()
{
   memset(arr,-1,5000001) ;
   arr[0] = 0 ;
   arr[1] = 1 ;
   
   int test_case , n ;
   cin >> test_case ;
   while(test_case--)
   {
   	cin >> n ; 
   	int maxCount = 0 , index = 0 ;
  for(int i = 2 ; i <= n ; i++)
  {
    	arr[i] = compute(i) ;
    	if(maxCount <= arr[i])
    	{
    	  maxCount = arr[i] ;
    	  index = i ;
        }
  }	
  cout << index << "\n"; 
}
}
