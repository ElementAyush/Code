#include <bits/stdc++.h>

std ::vector<int> adj[1001];

int main()
{
    int n , m , q ;
    std :: cin >> n >> m ;
    
    int a , b ;
    
    for(int i = 0 ; i < m ; i++)
    {
        std :: cin >> a >> b ;    
        adj[a].push_back(b) ;
    }
    
    std :: cin >> q ;
    
    int c , d ;
    while(q--)
    {
        std :: cin >> c >> d ;
        bool find = false ;
        for(int i = 0 ; i < adj[c].size() ; i++)
        {
            if(adj[c][i] == d)
            {
              find = true ;
              break ;
            }
        }
        if(find == true)
         std :: cout << "YES\n" ;
        else
         std :: cout << "NO\n" ;
    }
    
}
