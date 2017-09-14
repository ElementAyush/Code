#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    bool ar[400000] = {} ; int t ; long int m,n ;
    long int i,j,k = 0 ;
    while(t--)
    {
        cin >> m >> n ;

     for (i = m ; i <= n ; i++)
     {
       ar[i] = 1 ;
     }
     for(i =m ; i <= n ; i++)
    {
        for(j = 0 ; k < n ; j++)
        {
            k = (i*i) + (i * j) ;
            //if (ar[k] == 1)
            ar[k] = 0 ;
        }
    }
    for (i = 2 ; i < n ; i++)
    {

        if(ar[i] == 1)
        cout << i << endl ;
    }
}
}

