#include <bits/stdc++.h>

using namespace std ;

string idToShortURL(long long int id)
{
	char map[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	string sortURL ;
	
	while(id)
	{
		sortURL.push_back(map[id % 62]) ;
		id /= 62 ;
	}
	
	reverse(sortURL.begin() , sortURL.end()) ;
	
return sortURL ;
}

int sortURLToId(string url)
{
	long long int id = 0 ;
	
  	for(int i = 0 ; i < url.length() ; i++)
	  {
	    if(url[i] >= 'a' && url[i] <= 'z')
		  id = id * 62 + url[i] - 'a' ;	
		  
		if(url[i] >= 'A' && url[i] <= 'Z')
		  id = id * 62 + url[i] - 'A' + 26 ;	
		  
		if(url[i] >= '0' && url[i] <= '9')
		  id = id * 62 + url[i] - '0' + 52 ;	
	  } 
	  
   return id ;
}

int main()
{
    long long int id = 1001 ;
	string url = idToShortURL(id)  ;
	cout << url << "\n" ;
	cout << sortURLToId(url) ;
}
