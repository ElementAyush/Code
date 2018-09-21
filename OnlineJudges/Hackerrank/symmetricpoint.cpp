#include <iostream>

using namespace std ;

int main()
{
    int t , x1 , x2 , x3 , x4 , x5 , x6 , r1 , r2 ;
    cin >> t ;
    while(t--)
    {

        cin >> x1 >> x2 >> x3 >> x4 ;
        x5 = x3 - x1 ;
        x6 = x4 - x2 ;
        r1 = x5 -(-x3) ;
        r2 = x6 -(-x4) ;
        cout << r1 << "\n" << r2 << endl ;
    }
    return 0 ;
}
