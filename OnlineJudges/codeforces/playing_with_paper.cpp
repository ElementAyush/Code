#include <iostream>

using namespace std ;

int main()
{
    long long a , b , ans = 0 ;
    cin >> a >> b ;
    while(a > 0 && b > 0)
    {
        if(a >= b)
        {
            ans = ans + a / b ;
            a = a % b ;
        }
        else
        {
            ans = ans + b / a ;
            b = b % a ;
        }
    }

    cout << ans ;
}
