#include <iostream>
#include <String>

using namespace std ;

int main()
{
    string s ;
    int time , n ;
cin >> n >> time >> s ;
while(time)
{
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == 'B' && s[i+1] == 'G')
        {
            int temp ;
            temp = s[i] ;
            s[i] = s[i+1] ;
            s[i+1] = temp ;
            i++ ;
        }
    }
    time-- ;
}
cout << s ;
return 0 ;
}
