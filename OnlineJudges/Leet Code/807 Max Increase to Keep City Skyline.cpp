#include<bits/stdc++.h>

using namespace std ;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int> >& grid) {
    	int gridSize = grid.size();
        int rowMaxs[gridSize];
        int colMaxs[gridSize] ;
        for(int i = 0 ; i < gridSize ; i++)
         {
         	rowMaxs[i] = 0 ;
         	colMaxs[i] = 0 ;
		 }
     for(int i = 0 ; i < gridSize ; i++)
     {
         for(int j = 0 ; j < gridSize ; j++)
         {
           rowMaxs[i] = max(rowMaxs[i], grid[i][j]) ;
           colMaxs[j] = max(colMaxs[j] , grid[i][j]) ;
         }
     }
     
     int result = 0 ;
     
     for(int i = 0 ; i < gridSize ; i++)
     {
     	for(int j = 0 ; j < gridSize ; j++)
     	{
     	  result += min(rowMaxs[i] , colMaxs[j]) - grid[i][j] ;	
		}
	 }

return result ;
    }
};

int main()
{
    vector< vector <int > > grid = {{3,0,8,4},{2,4,5,7},{9,2,6,3},{0,3,1,0}} ;
    Solution s ;
   cout <<  s.maxIncreaseKeepingSkyline(grid) ;


}
