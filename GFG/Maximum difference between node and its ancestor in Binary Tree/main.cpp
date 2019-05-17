#include <bits/stdc++.h>

using namespace std ;

class Node
{
	public:
	int val ;
	Node *left ;
	Node *right ;
	Node(int d)
	{
		val = d ;
		left = nullptr ;
		right = nullptr ;
	}
};

class NodeUtill
{
	public:
	Node *addNewNode(Node *root , int val)
	{
		if(root == nullptr)
		 return new Node(val) ;
		else
		{
			Node *temp ;
			if(root -> val > val)
			{
				temp = addNewNode(root -> left , val) ;
				root -> left = temp ;
			}
			else
			{
			   temp = addNewNode(root -> right , val) ;
			   root -> right = temp ;	
			}
	   }
	   return root ;
	}
	
	void printInOrder(Node *root)
	{
		if(root)
		{
			printInOrder(root -> left) ;
			cout << root -> val << " ";
			printInOrder(root -> right) ;
		}
	}
	
	int calcUtill(Node *root , int *res)
	{
	   if(root == nullptr)
	     return INT_MAX ;
		if(root -> left == nullptr && root -> right == nullptr)
		  return root -> val ;
		  
		int temp = min(calcUtill(root -> left , res) , calcUtill(root -> right, res)) ;
		*res = max(*res , root -> val - temp) ;
		 return min(root -> val , temp) ;	
	} 
	
	int claculateMaxDistance(Node *root)
	{
	  	int res = INT_MIN ;
	  	calcUtill(root , &res) ;
	  	return res ;
	}
};


int main()
{
	Node *root = new Node(10) ;
	NodeUtill nu ;
	nu.addNewNode(root ,12) ;
	nu.addNewNode(root ,8) ;
	nu.addNewNode(root ,9) ;
	nu.addNewNode(root ,11) ;
	cout << nu.claculateMaxDistance(root) << "\n";
	//nu.printInOrder(root) ;
}
