/* Longest common sequence using Dynamic programing */
#include<bits/stdc++.h>

using namespace std ;

int LCS(string s1 , int lens1 , string s2 , int lens2)
{
  int dp[lens1 + 1][lens2 + 1] ;
  
  for(int i = 0 ; i <= lens1 ; i++)
  {
  	for(int j = 0 ; j <= lens2 ; j++)
  	{
  	  if(j == 0 || i == 0)
	   dp[i][j] = 0 ;
	   
	  else if(s1[lens1 - 1] == s2[lens2 - 1])
	   dp[i][j] = 1 + dp[i - 1][j - 1] ;
	  
	  else
	   dp[i][j] = max(dp[i - 1][j] , dp[i][j-1]) ;   	
	}
  }
  
   for(int i = 0 ; i <= lens1 ; i++)
  {
  	for(int j = 0 ; j <= lens2 ; j++)
  	{
  		cout << dp[i][j] << " " ;
  	}
  	    cout << "\n" ;
  }
  
  dp[lens1][lens2] ;
}
int main()
{
	string s1 , s2 ;
	cin >> s1 >> s2 ;
	int lens1 = s1.length() ;
	int lens2 = s2.length() ;
 	cout << LCS(s1 , lens1 , s2 , lens2) << "\n" ;
}
