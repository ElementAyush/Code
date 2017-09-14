#include <iostream>
#include <string>

using namespace std ;

int main()
{

    int t ;
    string s ;
    cin >> t ;
    while(t--)
    {
        cin >> s ;
        int count = 0 ;
        long int len = s.length() ;
        for(int i = 0 ; i < len ; i++)
        {
            if(s[i] == 'k' || s[i] == 'G' || s[i] == 'L')count += 2 ;
            if(s[i] == 'R')count += 3 ;

        }
        cout << count << "\n" ;
    }
}
