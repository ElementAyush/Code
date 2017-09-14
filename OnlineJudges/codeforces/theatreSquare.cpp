#include <iostream>
#include <math.h>

using namespace std ;

int main()

{
    long long int m,n,a,required ;
    cin >> m >> n >> a ;

    required = ((m+a-1)/a) * ((n+a-1)/a) ;
    cout << required ;
    return 0 ;
}
