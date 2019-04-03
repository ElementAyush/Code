/*  https://www.codechef.com/wiki/tutorial-dynamic-programming */
#include<bits/stdc++.h>

using namespace std ;

int minStepToOne(int n)
{
   if(n == 1)
    return 0 ;

   int x = 1 + minStepToOne(n - 1) ;
   if(n % 2 == 0)
     x = min(x , 1 + minStepToOne(n / 2)) ;
   if(n % 3 == 0)
     x = min(x , 1 + minStepToOne(n / 3)) ;

   return x ;

}


int main()
{
    int n = 10 ;
    cout << minStepToOne(n) ;
}
