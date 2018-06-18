#include<bits/stdc++.h>

using namespace std ;

struct Node 
{
	int data ;
	Node *left ;
	Node *right ;
};

void Inorder(Node *root)
{
	if(root == NULL)
	 return ;
	
	Inorder(root -> left) ;
	cout << root -> data << " " ;
	Inorder(root -> right) ;
}

Node *createNode(int data)
{
	Node *temp = new Node ;
	temp -> data = data ;
	temp -> left = NULL ;
	temp -> right = NULL ;
}

void createBST(Node *root,int data)
{
	if(root == NULL)
	 return ;
	if(root -> data < data)
	 if(root -> right == NULL)
	  root -> right = createNode(data);
	 else
	  createBST(root -> right , data) ;
	if(root -> data > data)
	 if(root -> left == NULL)
	  root -> left = createNode(data);
	 else
	  createBST(root -> left , data) ;
}

Node *minValueNode(Node *root)
{
	Node *current = root ;
	while(current -> left != NULL)
	 current = current -> left ;
return current ;
}

Node *deleteNode(Node *root , int data)
{
  if(root == NULL) return root ;	
	
  if(root -> data > data)
   root -> left = deleteNode(root -> left , data) ;
  if(root -> data < data)
   root -> right = deleteNode(root -> right ,data) ;
  else
  {
  	if(root -> left == NULL)
  	{
  	 Node *temp = root -> right ;
	 free(root) ;
	 return temp ;	
	}
	if(root -> right == NULL)
	{
		Node *temp = root -> left ;
	    free(root) ;
	    return temp ;
	}
	
	Node *temp = minValueNode(root -> right) ;
	root -> data = temp -> data ;
	root -> right = deleteNode(root -> right, temp -> data)
  }
  
   return root ;
}

int main()
{
 Node *root = createNode(50) ;
 createBST(root,40) ;
 createBST(root,70) ;
 createBST(root,60) ;
 createBST(root,80) ;	
 createBST(root,30) ;
 
 Inorder(root) ;
}
