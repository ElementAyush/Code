/*---- Binary search tree implimentation ----*/

#include<bits/stdc++.h>

using namespace std ;

struct Node
{
	int data ;
	Node *left ;
	Node *right ;
};
Node *Head ;

Node *createNode(int data)
{
	Node *temp = new Node;
	temp->data = data ;
	temp->left = NULL ;
	temp->right = NULL;

return temp ;
}



Node* Insert(Node *node ,int data)

int main()
{
	Insert(Head,20) ;
}
