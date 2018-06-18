#include<bits/stdc++.h>

using namespace std ;

class Graph
{
	int v ; // number of vertices
	list<int> *adj; //pointer to array containing adjancy list 
	
	public:
		Graph(int v) ;
		void addEdge(int v, int w); // function to add an edge to graph
        void BFS(int s);  // prints BFS traversal from a given source s
};

Graph::Graph(int v)
{
	this->v = v ;
	adj = new list<int>[v] ;
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w) ;
}

void Graph::BFS(int s)
{
	bool *visited = new bool[v] ;
	for(int i = 0 ; i < v ; i++)
	 visited[i] = false ;
	 
	list<int> queque ;
	visited[s] = true ;
	queque.push_back(s) ;
	list<int>::iterator i;
	
	while(!queque.empty())
	{
		s = queque.front() ;
		cout << s << " " ;
		queque.pop_front() ;
		for(i = adj[s].begin() ; i != adj[s].end(); i++)
		{
			if(!visited[*i])
			 {
			visited[*i] = true ;
			queque.push_back(*i) ;
	       	}
		}
	}
}

int main()
{
	Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
   //g.addEdge(2, 3);
   //g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) n";
    g.BFS(0);
    
    
	return 0 ;
}
