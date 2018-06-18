#include<bits/stdc++.h>

using namespace std ;

int main()
{
	bool** flags = new bool*[6];
    fill(flags, flags+6, false);
    
    for(int i = 0 ; i < 6 ; i++)
     cout << *(*(flags+i));
	 
}
