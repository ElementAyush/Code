/* --------- https://www.geeksforgeeks.org/shortest-distance-two-cells-matrix-grid/ ------------- */

#include<bits/stdc++.h>

using namespace std ;


class Qitem
{
	public:
		
	  int row ;
	  int col ;
	  int dist ;
	  Qitem(int x , int y , int z) : row(x) , col(y) , dist(z) 
	  {
	  	
	  }
	
} ;


int minimumDistance(vector< vector <char> > &grid)
{
	vector < vector <bool> > visited(grid.size() , vector <bool> (grid[0].size() , 0)) ;
	
	Qitem source(0 , 0 , 0) ;
	int n = grid.size() ;
	int m = grid[0].size() ;
	
	for(int i = 0 ; i < grid.size() ; i++)
	{
		for(int j = 0 ; j < grid[i].size() ; j++)
		{
			if(grid[i][j] == '0')
			 visited[i][j] = true ;
			else
			 visited[i][j] = false ;
			 
			if(visited[i][j] == 's')
			{
			 source.row = i ;
			 source.col = j ;
		    }
			  
		}
	}
	
	queue<Qitem> p ;
	p.push(source) ;
	
	visited[source.row][source.col] = true ;
	while(!p.empty())
	{
		Qitem q  = p.front();
		p.pop() ;
		
		if(grid[q.row][q.col] == 'd')
		 return q.dist;
		
		if(q.row + 1 < n && visited[q.row + 1][q.col] == false)
		{
		  p.push(Qitem(q.row + 1 , q.col , q.dist + 1)) ;
		  visited[q.row + 1][q.col] = true ;
	    }
	    
	    if(q.row - 1 >= 0 && visited[q.row - 1][q.col] == false)
		{
		  p.push(Qitem(q.row - 1 , q.col , q.dist + 1)) ;
		  visited[q.row - 1][q.col] = true ;
	    }
	    
	    if(q.col - 1 >= 0 && visited[q.row][q.col - 1] == false)
		{
		  p.push(Qitem(q.row , q.col - 1 , q.dist + 1)) ;
		  visited[q.row][q.col - 1] = true ;
	    }
	    
	     if(q.col + 1 < m && visited[q.row][q.col + 1] == false)
		{
		  p.push(Qitem(q.row , q.col + 1 , q.dist + 1)) ;
		  visited[q.row][q.col + 1] = true ;
	    }
	
	}
}

int main()
{
	vector < vector <char> > grid = { { '0', '*', '0', 's' },
                        { '*', '0', '*', '*' },
                        { '0', '*', '*', '*' },
                        { 'd', '*', '*', '*' } };
 
 cout << minimumDistance(grid) ;
	
}
