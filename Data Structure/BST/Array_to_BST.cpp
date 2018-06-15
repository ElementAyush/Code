#include<bits/stdc++.h>

using namespace std ;

struct Node
{
	int data ;
	Node *left ;
	Node *right ;
};

Node *createNode(int data)
{
 Node *temp = new Node ;
 temp -> data = data ;
 temp -> left = NULL ;
 temp -> right = NULL ;	
}

void Inorder(Node *root)
{
	if(root == NULL)
	 return ;
	Inorder(root->left) ;
	cout << root -> data << " " ;
	Inorder(root->right) ;
}

Node *createBST(int *arr,int start,int end)
{
  if(start > end)
   return NULL;
  int mid = start+end / 2 ;	
  cout << mid << "\n" ;
  Node *root = createNode(arr[mid]) ;
  root -> left = createBST(arr,start,mid) ;
  root -> right = createBST(arr,mid+1,end) ;

return root ;  
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	Node *Thead = createBST(arr,0,n-1) ;
	Inorder(Thead) ;
}
