#include <bits/stdc++.h>

using namespace std ;

class LRU
{
	list<int> dq ;
	map<int , list<int>::iterator> cache ;
	int csize ;
	
	public:
		LRU(int size) ;
		void display() ;
		void insert(int num) ;
	
};

LRU :: LRU(int size)
{
	csize = size ;
}

void LRU :: insert(int num) 
{
	if(cache.find(num) == cache.end())
	{
		if(dq.size() == csize)
		{
			int last = dq.back() ;
			dq.pop_back() ;
			cache.erase(last) ;
		}
	}
	else
	 dq.erase(cache[num]) ;
	 
	dq.push_front(num) ;
	cache[num] = dq.begin() ;
}
// display contents of cache
void LRU :: display()
{
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << (*it) << " ";
    cout << endl;
}

int main()
{
	LRU ca(4);

    ca.insert(1);
    ca.insert(2);
    ca.insert(3);
    ca.insert(1);
    ca.insert(4);
    ca.insert(5);
    ca.display();

    return 0;
}
