#include <bits/stdc++.h>

using namespace std ;

vector<int> vec ;
vector <int> prefixsum ;

/*int binarySearch(int num , int left , int right)
{
  while(left < right)
  {
  	int mid = left + right / 2 ;
  	
  	if(num == vec[mid - 1])
  	 return mid ;
  	
	if(num < vec[mid - 1])
  	{
  		right = mid ;
  		binarySearch(num,left,right) ;
	}
	
	if(num > vec[mid - 1])
	{
		left = mid ;
		binarySearch(num,left,right) ;
	}
  }
return 0 ;	
}*/


int findShops(int num)
{
	int count = 0 ;
	for(int i = 0 ; num >= prefixsum[i] ; i++)
	   count++ ;
	   
return count ;
}

int main()
{
	int num_of_shops ;
	cin >> num_of_shops ;
	int k ;
	for(int i = 0 ; i < num_of_shops ; i++)
	{
		cin >> k ;
		vec.push_back(k) ;
	}
	
	sort(vec.begin(),vec.end()) ;
    
    vector<int> :: iterator upper ;
			
	int q ;
	cin >> q ;
	int m ;
	while(q--)
	{
		cin >> m ;
		upper = upper_bound(vec.begin() , vec.end() , m)  ;
		cout << upper - vec.begin() << "\n" ;
	}

}
