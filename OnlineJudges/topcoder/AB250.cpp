#include <bits/stdc++.h>
using namespace std ;

class AB
{
    public :
    string createString(int N, int K);
    //void swap(char *a , char *b) ;
};

//void AB :: swap(char *a , char *b)
//{
//	char temp = *a ;
//	*a = *b ;
//	*b = temp ;
//}

string AB :: createString(int N, int K)
    {
        string c = string(N / 2 ,'B') + string(N - N / 2 , 'A') ;
        int cnt = 0 ;
        if(cnt == K)
            return c ;
        for(int i = 0 ; i < N - 1 ; ++i)
        {
            for(int j = 0 ; j < N - 1 ; ++j)
            {
                if(c[j] == 'B' && c[j+1] == 'A')
                 {
                 	swap(c[j] ,  c[j + 1]) ;
                 	if(++cnt == K)
                 	 return c ;
				 }
            }
        }
        return ""  ;
    }
    
int main()
{
	AB a ;
	cout << a.createString(10, 12) ;
}
