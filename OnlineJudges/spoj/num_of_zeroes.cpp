#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int num , test_case ;
	
	cin >> test_case ;
	
	while(test_case--)
	{
	 cin >> num ;
	int total_sum_2 = 0  , total_sum_5 = 0  ;
	int i = 1 ;
//	while((num / pow(2,i)) > 0)
//	{
//		total_sum_2 += (num/pow(2,i));
//		i++ ;
//	}
		
	//i = 1 ;
	while((num / pow(5,i)) > 0)
	{
		total_sum_5 += (num/pow(5,i));
		i++ ;
	}
	
	cout << min(total_sum_2,total_sum_5) << "\n";
   } 
}
