#include<iostream>
#include<math.h>

using namespace std;

int fact(int n)
{
    if (n <=1) return 1 ;
    else return n*fact(n-1);
}

int main()
{   int t , n;
    cin >> t ;
    cin >> n ;
    int val = fact(n) ;
    cout << val ;
}
