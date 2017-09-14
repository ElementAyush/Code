#include <iostream>
#include <string>

using namespace std ;

int main()
{
	long int r,d = 6 ;//d = 4000000007 ;
	long long int dividend = 0, q = 0 ;
	cin >> r ;
	q = r + 1 ;
    dividend = d * q + r ;
    cout << "dividend =" << dividend << endl << "remainder = " << r << endl << "divisor = " << d << "\n" << "quotient = " << q <<"\n" ;

}