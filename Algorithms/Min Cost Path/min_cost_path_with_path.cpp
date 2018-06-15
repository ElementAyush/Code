#include<bits/stdc++.h>

using namespace std ;

bool dp ;

void print(vector<int> &p)
{
	for(int i = 0 ; i < p.size() ; i++)
	   cout << p[i] << "  ";
	cout << "\n" ;
}

/*void printPath(int arr[] , int size , int sum , vector<int> &p)
{
	if(size == 0 && sum != 0 && dp[0][sum])
	{
		p.push_back(arr[size]) ;
		print(p) ;
		return;
	}
}
*/
void solve(int arr[], int size, int sum)
{
	if (size == 0 || sum < 0)
       return ;
	dp = new bool*[size] ;
	for(int i = 0 ; i < size ; i++)
	{
	   dp[i]= new bool[sum+1] ;
	   dp[i][0] = true ;
    }
    
    if (arr[0] <= sum)
       dp[0][arr[0]] = true;
       
    for(int i = 1 ; i < size ; i++ )
       for(int j = 0 ; j < sum +1 ; j++ )
          dp[i][j] = (arr[i] <= j)? dp[i-1][j] || dp[i-1][j-arr[i]] : dp[i-1][j] ;
    
	if(dp[size-1][sum] == false)
	{
	   cout << "There is no subset with the given sum" << "\n" ;
	   return ;
    }
	  
	  for(int i = 0 ; i < size ; i++ ){
       for(int j = 0 ; j <= sum+1 ; j++ ){
         cout << dp[i][j] << "  ";
     }
     cout << "\n" ;
 }
	//vector<int> p  ;
	//printPath(arr, size , sum, p)  ;
}

int main()
{
	int arr[5] = {3,2,1,5,4} ;
	solve(arr,5,7) ;
}
