/* -- DFS Implementation --*/
#include<bits/stdc++.h>

class Graph
{
	std :: list<int> *adj ;
	int V ;
	
	public:
	  Graph(int V) ;
	 //DFSUtil();
	 void DFS(int v) ;
	 void addEdge(int v , int w) ;
	 
}

Graph :: Graph(int V)
{
	this -> V = V ;
	adj = new list<int>[V] ;
}

void Graph :: addEdge(int v , int w)
{
	adj[v].push_back(w) ;
}

void Graph :: DFSUtil(int v , bool visited[])
{
	visited[v] = true ;
	cout << v << " " ;
}

void Graph :: DFS(int v)
{
	bool *visited = new bool[V] ;
	for(int i = 0 ; i < V ; i++)
	   visited[i] = false ;
	for(int i = 0 ; i < V ; i++)
	  if(visited[i] == false)
	   DFSUtil(i , visited) ;
}

int main()
{
	
}
