#include<bits/stdc++.h>

using namespace std ;

void solve(int *leaderboard , int leaderboard_size , int *alice , int alice_size)
{
	int hRank = 1 ;
	for(int i = leaderboard_size - 1 ; i > 0 ; i--)
	 if(leaderboard[i] < leaderboard[i - 1])
	   hRank++ ;
	hRank++ ;
	
		int j = leaderboard_size - 1 ;
	
	vector<int> ranks(alice_size) ;
	for(int i = 0 ; i < alice_size ; i++)
	{
	
		while(alice[i] >= leaderboard[j])
		{
			if(hRank == 1)
			 break ;
			
			if(leaderboard[j] == leaderboard[j - 1])
			 {
			 	j-- ;
			 }
			 else
			 {
			 	j-- ;
			 	hRank-- ;
			 }
		}
		ranks[i] = hRank ;
	}
}

int main()
{
	int leaderboard_size = 7 , alice_size = 4 ;
	int leaderboard[] = {100, 100, 50, 40, 40, 20, 10} ;
	int alice[] = {5, 25, 50, 120} ;
	solve(leaderboard , leaderboard_size , alice , alice_size) ;
}
