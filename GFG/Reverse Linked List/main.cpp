//Programe to reverse linked list
#include<bits/stdc++.h>

using namespace std ;

class Node
{
public:	
	int data ;
	Node *next ;
	
	Node(int d)
	{
		data = d ;
		next = nullptr ;
	}
};

class LinkedList
{
public:
  Node *createLinkedList(int data , Node *root)
  {
     if(root == nullptr)
       return new Node(data) ;
     else
     {
     	Node *tempHead = root ;
		while(tempHead -> next  != nullptr)
		{
		  tempHead = tempHead -> next ;	
		} 
		tempHead -> next = new Node(data) ;
	 }
	 return root ;
  }	
  
  Node *reverseLinkedList(Node *head)
  {
  	Node *prevNode , *currNode ;
  	prevNode = head ;
  	currNode = head -> next ;
  	head = head -> next ;
  	prevNode -> next = nullptr ;
  	
  	while(head != nullptr)
  	{
  	  head = head -> next ;
	  currNode -> next = prevNode ;
	  prevNode = currNode ;
	  currNode = head ;	
	}
	head = prevNode ;
	
	return head ;
  }
  
  void printLinkedList(Node *root)
  {
  	   Node *tempHead = root -> next ;
		while(tempHead != nullptr)
		{
		  cout << tempHead -> data << "->" ;
		  tempHead = tempHead -> next ;	
		} 
		cout << "null" <<"\n" ; 
  }
};

int main()
{
	Node *root =  new Node(0) ;
	LinkedList *ll = new LinkedList() ;
	ll -> createLinkedList(1,root) ;
	ll -> createLinkedList(2,root) ;
	ll -> createLinkedList(3,root) ;
	ll -> createLinkedList(4,root) ;
	ll -> printLinkedList(root) ;
	Node *newHead = ll -> reverseLinkedList(root) ;
	ll -> printLinkedList(newHead) ; 
}
