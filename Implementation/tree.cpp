#include <bits/stdc++.h>

using namespace std ;

struct Node
{
	int data ;
	Node *left;
	Node *right ;
};


void inorder(Node *root)
{
	if(root == NULL)
	  return ;
	
	cout << root -> data << " " ;
	
	inorder(root -> left) ;
	inorder(root -> right) ;
}

Node *Insert(int data)
{
	Node *temp = new Node ;
	temp -> data = data ;
	temp -> left = NULL ;
	temp -> right = NULL ;
	
return temp ;
}

int main()
{
  Node *root            = Insert(1);	
  root -> left          = Insert(2);	
  root -> left -> left  = Insert(3);
  root -> left -> right = Insert(4);	
  
  inorder(root);
  
}
