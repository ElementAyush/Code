/*
Input  : Hi how are you geeks 
Output  : Hi woh era uoy geeks

Input : I am fine
Output : I ma fine

*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{
	string sentence = "Hi how are you geeks" ;
	int i = 0 ;
	for(; i < sentence.length() && sentence[i] != ' ' ; i++)
	   cout << sentence[i] ;
	
	string word = "" ;
	for(; i < sentence.length() ; i++)
	{
		if(sentence[i] != ' ')
		  word += sentence[i] ;
		else
		{
			reverse(word.begin() , word.end());
			cout << word << " ";
			word = "" ;
		}
	}
	cout << word ;
}
