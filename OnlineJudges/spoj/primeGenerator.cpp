/*----  Prime number generater in range problem from spoj
0 means number is prime 1 means not prime 
 -----*/
#include<bits/stdc++.h>

using namespace std;

vector <int> vec(1000000000,0);

void populateArray()
{
	int num = 1000000000;
	int sqrt_of_num = sqrt(num) ;
	vec[0] = 1 ;
	vec[1] = 1 ;
	vec[2] = 0 ;
	vec[3] = 0 ;
	for(long long i = 2 ; i <= sqrt_of_num ; i++)
	{
	 for( long long j = 2 ; j*i <= num ; j++)
	 {
	    vec[i*j] = 1 ;
	 } 
   }
}

int main()
{
	cout << "before" ;
	populateArray() ;
	cout << "after" ;
	int n , m  , test_cases ;
	cin >> test_cases ;
	while(test_cases--)
	{
	cin >> n >> m ;
	for(int i = n ; i <= m ; i++)
	{
	  if(vec[i] == 0)
	   cout << i << endl ;
    }
    }
}
