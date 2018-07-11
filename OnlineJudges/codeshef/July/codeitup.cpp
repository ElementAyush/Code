#include<bits/stdc++.h>

using namespace std ;

int main()
{
	string str , inp ;
	int op ;
	stack<string> st ;
	cin >> op ;
	cin.ignore() ;
	while(op--)
	{
		getline(cin , inp) ;
		if(inp[0] == '1')
		{
			st.push(str) ;
			inp.erase(inp.begin(),inp.begin()+2);
			str += inp ;
		}
		if(inp[0] == '2')
		{
			st.push(str) ;
			int len =  inp[2]-'0' ;
			str.erase(str.end() - len , str.end()) ;
		}
		if(inp[0] == '3')
		{
		 cout << str[inp[2] - '0' - 1] << endl;
	    }
		if(inp[0] == '4')
		{
			str.clear() ;
			str = st.top();
			st.pop();
		}
		inp.clear() ;
	}
}
