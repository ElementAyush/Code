#include <bits/stdc++.h>

using namespace std ;

int main()
{
	vector <int> myVec ;
	myVec.push_back(20) ;
	myVec.push_back(10) ;
	myVec.push_back(50) ;
	
	vector<int> *ptr = &myVec ;
	 cout << ptr->at(1) ;
	
	return 0 ;
}
