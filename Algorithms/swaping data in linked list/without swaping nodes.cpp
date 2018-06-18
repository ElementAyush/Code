#include<bits/stdc++.h>
using namespace std ;

struct Node 
{
	int data ;
	Node *next ;
};

void swap(Node **start , int d1 , int d2)
{
	if(d1 == d2)
	 return ;
	Node *curX = *start , *prevX=NULL ;
	while(curX -> data != d1)
	{
		prevX = curX ;
		curX = curX->next ;
	}
	Node *curY = *start , *prevY = NULL ;
	while(curY -> data != d2)
	{
		prevY = curY ;
		curY = curY -> next ;
	}
	
	if(curX == NULL || curY == NULL)
	  return ;
	
	if(prevX != NULL)
	 prevX -> next = curY ;
	else
	 *start = curY ;
	
	if(prevY != NULL)
	  prevY -> next = curX ;
	else
	  *start = curX ;
	  
	Node *temp = curY -> next ;
	curY -> next = curX -> next ;
	curX->next = temp ;
}

//Function to to insert new node in linked list
void push(Node **start , int data)
{
	Node *temp = new Node ;
	temp -> data = data ;
	temp->next = *start ;
	*start = temp ; 
}

//Function to print linked list
void printList(Node **start)
{
	Node *temp = new Node ;
	temp = *start ; 
	while(temp != NULL)
	{
		cout << temp->data << " " ;
		temp = temp -> next ;
	}
}

int main()
{
	Node *start = new Node ;
	start = NULL ;
	push(&start , 7) ;
	push(&start , 6) ;
	push(&start , 5) ;
	push(&start , 4) ;
	push(&start , 3) ;
	push(&start , 2) ;
	push(&start , 1) ;
	
	printList(&start) ;
	swap(&start,7,2) ;
	cout << endl ;
	printList(&start) ;
}
