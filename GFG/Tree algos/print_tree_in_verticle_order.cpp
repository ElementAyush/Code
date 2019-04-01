/* Program to print the nodes of a tree in vertical order */

#include<bits/stdc++.h>

using namespace std ;

struct Node
{
	int data ;
	Node *left ; 
	Node *right ;
};

Node *newNode(int data)
{
	Node *temp = new Node ;
	temp -> data = data ;
	temp -> left = NULL ;
	temp -> right = NULL ;
	
return temp ;
} 

void getMinMax(Node *root , int *min , int *max , hd)
{
	if(root == null)
	 return ;
	 
	if(hd < *min)
	 min = hd ;
	 
	if(hd > *max)
	 max = hd ;
	 
	getMinMax(root -> left , min , max , hd - 1) ;
	getMinMax(root -> right , min , max , hd + 1) ;	
}

void printVerticleLine(Node *root , int line_no , hd)
{
	if(root == null)
	 return ;
	 
	if(hd == line_no)
	 cout << root -> data ;
	 
printVerticleLine(root -> left , line_no , hd - 1) ;	
printVerticleLine(root -> right , line_no , hd + 1) ;	  
	
}

void verticalOrder(Node *root)
{
	int min = 0 , max = 0 ;
	getMinMax(root , &min , &max , 0) ;
}

int main()
{
  Node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    root->right->left = newNode(6); 
    root->right->right = newNode(7); 
    root->right->left->right = newNode(8); 
    root->right->right->right = newNode(9); 
  
    cout << "Vertical order traversal is \n"; 
    verticalOrder(root); 
  
    return 0; 	
}
