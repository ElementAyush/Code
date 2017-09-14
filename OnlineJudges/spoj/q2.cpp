#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    bool ar[100000] ;
    long long int i,j,k,l,o,m,p,n = 100000 ;
    int t ;
    for(i = 0 ; i < n ; i++ )ar[i] = true ;
    cin >> t ;
    while(t--)
    {
        cin >> m >> n ;
        for(i = 2 ; i <=sqrt(n) ; i++)
        {
        k = m/i ;
        l = k*i ;
        for(j = 1 ; j <= n/2 ; j++)
        {
            o = l + i*j;
            ar[o] = false ;
        }
        }
        for(i = m ; i <= n ; i++)
        {
            if(ar[i] == true)cout << i << endl ;
        }
  }
 }

