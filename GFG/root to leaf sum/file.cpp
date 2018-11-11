/* ---- https://www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/ -------- */
#include<bits/stdc++.h>

using namespace std ;

struct Node
{
 int data ;
 Node *left ;
 Node *right ;	
} ;

Node *createNode(int data)
{
	Node *temp = new Node ;
	temp -> data = data ;
	temp -> left = NULL ;
	temp -> right = NULL ;
	
	return temp ;
}

bool hasPath(Node *root , int sum)
{
	if(root == NULL)
	 return (sum == 0) ;
	 
	else
	{
		bool ans ;
		int subsum = sum - root -> data ;
		
		if(subsum == 0 && root -> left == NULL && root -> right == NULL)
		 return 1 ;
		 
		if(root -> left)
		 ans = ans || hasPath(root -> left , subsum) ;
		 
		if(root -> right)
		 ans ans || hasPath(root -> right , subsum) ;
		 
		return ans ;
	}
}

int main()
{
	
}
