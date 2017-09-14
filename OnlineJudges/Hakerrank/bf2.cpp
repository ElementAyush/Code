/* A program to find day of a given date */
#include<iostream>
using namespace std ;
int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

/* Driver function to test above function */
int main()
{
    int day = dayofweek(02, 11, 2000);
    cout << day ;

    return 0;
}
