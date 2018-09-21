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
    int d1,m1,y1,d2,m2,y2 ,count ,i,j,t;
    cin >> t ;
    while(t--)
    {

    cin >> d1 >> m1 >> y1 
    cin >> d2 >> m2 >> y2 ;
    count = 0 ;
    int k = y2-y1 ;
    if(k == 0)k=1;
    for(i = 0 ; i < k ; i++ )
    {
        for (j = 0 ; j < 12 ;j++)
        {
            int day = dayofweek(1, j, y1);
            if(day == 0)
            {
                count++ ;
            }

        }
        y1 +=1 ;
    }
  cout << count << endl;
    }
/*int day = dayofweek(d, m, y);
 cout << day ;
*/
    return 0;
}
