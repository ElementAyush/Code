/* -- Implementing DFS -- */
#include <bits/stdc++.h>

using namespace std ;

class Graph
{
	int v ;
	list<int> *adj ;
	void DFSUtil(int v , bool visited[]) ;
	public:
		Graph(int v) ;
		void DFS(int v) ;
		void addEdge(int v , int w) ;
		
};

Graph :: Graph(int v)
{
	this->v = v ;
	adj = new list<int>[v] ;
}

void Graph :: addEdge(int v , int w)
{
	adj[v].push_back(w) ;
}

void Graph :: DFSUtil(int v , bool visited[])
{
  visited[v] = true ;
  cout << v << " " ;
  list<int> :: iterator it ;
  for(it = adj[v].begin() ; it != adj[v].end() ; ++it)
  {
  	if(!visited[*it])
  	{
  	  DFSUtil(*it , visited) ;	
	}
  }
}

void Graph :: DFS(int v)
{
	bool *visited = new bool[v] ;
	for(int i = 0 ; i < v ; i++)
	  visited[i] = false ;
	  
	DFSUtil(v , visited) ;
}

int main()
{
 // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);
 
    return 0;
}












