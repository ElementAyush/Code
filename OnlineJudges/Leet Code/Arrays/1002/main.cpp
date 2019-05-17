#include <bits/stdc++.h>

using namespace std ;

void printVector(vector<string>& A)
{
	for(string s : A)
	 cout << s << " " ;
 }

vector<string> commonChars(vector<string>& A) {
        
        bool primary[26] ;
        vector<string> finalArray ;
        memset(primary,true,26) ;
        for(string s : A)
        {
        	bool secondary[26] ;
        	memset(secondary,false,26) ;
        	for(int i = 0 ; i < s.length() ; i++)
        	{
        		if(primary[s[i] - 'a'])
        		   secondary[s[i] - 'a'] = true ;
			}
			memcpy(primary , secondary , 26) ;
		}
        
        for(int i = 0 ; i < 26 ; i++)
        	if(primary[i])
        	{
        	 char c = i + 'a' ;
        	 string s;
        	 s.push_back(c) ;
        	 finalArray.push_back(s) ;
            }
        	 
        printVector(finalArray) ;
       return finalArray ;
    }

int main()
{
  vector<string> A = {"bella","label","roller"} ;
  commonChars(A) ;
  	
}
