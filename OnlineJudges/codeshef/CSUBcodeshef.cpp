#include <iostream>
#include <string>
#include <algorithm>
using namespace std ;
int main()
{

   long long int t ;
   unsigned long long int n,count1 ;
    string s ;;
    cin >> t ;
    while(t--)
    {
        count1 = 0 ;
        cin >> n ;
        cin >> s ;
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == '1')count1++ ;

        }

        cout << count1 * (count1+1)/2 << endl ;
    }
}
