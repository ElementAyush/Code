#include <iostream>

using namespace std;

int main()
{
    int test ;
    long long int a,b ;
    cin >> test ;
    while(test)
    {
        cin >> a >> b ;
        int result = 0 ;
        if(a == b)
            cout << result ;
        if(a != b)
        {
            while (a%2 != 0 || a != 1)
            {
                a = (a-1) / 2 ;
                result++ ;
            }
            if(a > b)
            {
                while(a != b || a != 1)
                {
                    a = a/2 ;
                    result++ ;

                }
                cout << result ;
            }
            if(a < b)
            {
                while(a != b || a != 1)
                {
                    a = a*2 ;
                    result++ ;
                }
                cout << result ;
            }
        }
        test-- ;
    }
}
