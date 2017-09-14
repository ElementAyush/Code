#include<iostream>

using namespace std ;

int main()
{

    int t ,n,result ;
    cin >> t ;
    while(t--)
    {
        cin >> n;
        if(n % 2 != 0 | n == 2 | n <= 0)

            cout << "NO" << endl ;
            else
                cout << "YES" << endl;

    }
return 0 ;
}
