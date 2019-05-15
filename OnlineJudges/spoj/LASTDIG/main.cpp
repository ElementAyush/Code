#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while(t--)
    {
        int a ;
        long b , c , d ;
        cin >> a  >> b ;
        c = a % 10 ;
        d = b % 4 ;

        if( b == 0 )
            cout << 1 << "\n" ;

        else if( c == 0  || c == 5 || c == 1 || c == 6)
            cout << c << "\n" ;

        else if(d == 1)
            cout << c << "\n" ;

        else if(d == 2)
         cout << (c * c) % 10 << "\n" ;

        else if(d == 3)
            cout << (c * c * c) % 10 << "\n" ;

        else if(d == 0)
            cout << (c * c * c * c) % 10 << "\n" ;
    }
}
