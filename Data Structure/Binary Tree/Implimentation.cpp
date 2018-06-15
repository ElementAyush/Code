#include <bits/stdc++.h>

using namespace std ;

struct Node
	{
		int data ;
		Node *left ;
		Node *right ;
	};

class Tree
{
	int lchild, rchild ;
	public:
		Node* addChild(int x) ;
};


Node* Tree :: addChild(int x)
{
	Node* temp = new Node;
	temp -> data = x ;
	temp -> left = NULL ;
	temp -> right = NULL ;
	
	return temp ;
}

int main()
{
	Tree t ;
    Node *root = t.addChild(20) ;
	root->left = t.addChild(12);
	root->right = t.addChild(14) ;	
}
