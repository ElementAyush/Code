#include <bits/stdc++.h>

using namespace std ;

class Graph 
{
  	vector<list<int>> graph ;
	int v ;
public:
    void createGraph(int m , int w);
    void printGraph() ;
};

void Graph::createGraph(int m , int w)
{
	list<int> :: iterator it ;
	int count = 0 ;
	for(int i = 0 ; i < graph.size() ; i++)
	{
		it=graph[i].begin() ;
		if(m == *it)
		{
			graph[i].push_back(w) ;
			count++ ;
		}
	}
	
	if(count == 0)
	{
		list <int> l ;
		l.push_back(m) ;
		l.push_back(w) ;
		graph.push_back(l) ;
	} 
}

void Graph :: printGraph()
{
	for(int i = 0 ; i < graph.size() ; i++)
	{
		list<int> :: iterator it ;
		for(it = graph[i].begin() ; it != graph[i].end() ; it++)
		{
			cout << *it << "->" ;
		}
		cout << "\n" ;
	}
}

int main()
{
Graph g ;
g.createGraph(1,2) ;
g.createGraph(1,3) ;
g.createGraph(2,3) ;
g.createGraph(2,4) ;
g.printGraph() ;
	
}
