#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int test_case ;
	cin >> test_case ;
	
	for(int i = 0 ; i < test_case ; i++)
	{
		string s1 , s2 ;
		cin >> s1 >> s2 ;
		if(s1 == "bob" || s2 == "bob")
		{
		 cout << "yes" << "\n" ;
		 continue ;
	    }
		int countb = 0 , counto = 0 , counta = 0;
		for(int j = 0 ; j < 3 ; j++)
		{
			if((s1[j] == 'b' && s2[j] == 'o') || (s1[j] == 'o' && s2[j] == 'b'))
			 counta++ ;
			else if(s1[j] == 'o' && s2[j] != 'b' || s1[j] != 'b' && s2[j] == 'o')
			 counto++ ;
			else if(s1[j] == 'b' && s2[j] != 'o' || s1[j] != 'o' && s2[j] == 'b')
			 countb++ ;
		}
		
		if(counta > 2)
		 {
		 	cout << "yes" << "\n" ;
		 	continue ;
		 }
		
		if(countb == 2 && counto == 0)
		{
			if(counta > 0)
			{
			 cout << "yes" << "\n" ;
			 continue ;
		    }
		}
		if(countb == 1 && counto == 0)
		{
			if(counta > 1)
			{
				cout << "yes" << "n" ;
				continue ;
			}
		}
		if(countb == 0 && counto == 1)
		{
			if(counta > 1)
			{
				cout << "yes" << "\n" ;
				continue ;
			}
		}
		if(countb == 1 && counto == 1)
		{
			if(counta > 0)
			{
				cout << "yes" << "\n" ;
				continue ;
			}
		}
		if(countb == 2 && counto == 1)
		{
			cout << "yes" << "\n" ;
			continue ;
		}
		cout << "no" << "\n" ;
	}
}
