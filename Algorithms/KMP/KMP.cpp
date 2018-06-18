/* -- KMP algorithm -- */
#include<bits/stdc++.h>
using namespace std ;

void prefix(int *lps , int m , string ptrn)
{
	lps[0] = 0 ;
	int i = 1 , len = 0 ;
	while(i < m)
	{
		if(ptrn[i] == ptrn[len])
		{
			len++ ; 
			lps[i] = len ;
			i++ ;
		}
		else
		{
			if(len != 0 )
			{
				len = lps[len-1] ;
			}
			else
			{
				lps[i] = 0 ;
				i++ ;
			}
		}
	}	
}

void KMP(string text , string ptrn)
{
	int pts = ptrn.length() ;
	int tes = text.length() ;
	int lps[pts] ;
	prefix(lps,pts,ptrn) ;
	int i = 0 , j = 0;
	while(i < tes)
	{
	while(text[i] == ptrn[j] && j < pts)
	{
		i++ ;
		j++ ;
	}
	if(j == pts)
	{
	 cout << "Pattern found at " << i << endl ;
	 j = lps[j-1] ;
    }
    else if(text[i] != ptrn[j])
    {
    	j = lps[j-1] ;
	}
	i++ ;
    }
}

int main()
{
	string text , ptrn ;
	cin >> text >> ptrn ;
    KMP(text,ptrn) ;
}
