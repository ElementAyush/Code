#include <bits/stdc++.h>

using namespace std ;

class Billboard
{
 public:
   vector<string> enlarge(string message, vector<string> letters);
} ;

vector<string> Billboard :: enlarge(string message, vector<string> letters)
{
	vector<string> result ;
	map<int , string> form ;
	for(int i = 0 ; i < letters.size() ; i++)
	{
		form[i] = letters[i].substr(2) ;
    }
    vector<string> final ;
	for(int i = -1 ; i < 23 ; i+=5)
	{
		i+=1 ;
		for(auto j : form)
		{
			string m = j.second ;
			final.push_back(m[i]+m[i+1]+m[i+2]+m[i+3]+m[i+4]+".") ;
		}
	}
	
	for(int i = 0 ; i < final.size() ; i++)
	{
		cout << final[i] ;
	}
}

int main()
{
	string s = "TOPCODER" ;
	vector<string> letters = {"T:#####-..#..-..#..-..#..-..#.." ,"O:#####-#...#-#...#-#...#-#####" ,"P:####.-#...#-####.-#....-#...." ,"C:.####-#....-#....-#....-.####" ,"D:####.-#...#-#...#-#...#-####." ,"E:#####-#....-####.-#....-#####" ,"R:####.-#...#-####.-#.#..-#..##"};
	Billboard b ;
	b.enlarge(s, letters) ;
}
