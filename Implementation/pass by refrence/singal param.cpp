/*
vector pass by refrence example
*/
#include<bits/stdc++.h>

using namespace std ;

void change(vector<int> &ref)
{
	int temp = ref[0];
	ref[0] = ref[1] ;
	ref[1] = temp ;
	
}

int main()
{
	vector<int> base ;
	base.push_back(10) ;
	base.push_back(20) ;
	base.push_back(30) ;
	
	change(base) ;
	
	cout << base[0] << "  " << base[1]  << "  " << base[2];
}
