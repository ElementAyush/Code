#include<bits/stdc++.h>

using namespace std ;

int main()
{
	 int tweet , click ;
	 cin >> tweet >> click ;
	 int dp[tweet + 1][2] ;
	 memset(dp,0,sizeof(dp)) ;
	 
	 
	 string str ;
	 int count = 0 ;
	 while(click--)
	 {
	 	cin.ignore() ;
	 	getline(cin , str) ;
			
	 	if(str[2] == 'I')
	 	 {
	 	 	if(dp[str[6] - '0'][1] == 0)
	 	 	 {
	 	 	 	count++ ;
	 	 	 	cout << count << "\n" ;
	 	 	 	dp[str[6] - '0'][1] = 1 ;
			 }
			 if(dp[str[6] - 48][1] == 1)
			  {
			  	cout << "else" ;
			  	count-- ;
			  	dp[str[6] - 48][1] = 0 ;
			  	cout << count << "\n" ;
			  }
		 }
		 else
		 {
		  memset(dp,0,sizeof(dp)) ;
		  count = 0 ;
		  cout << count << "\n" ;
		 }
	 }
}
