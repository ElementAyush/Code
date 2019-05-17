#include<bits/stdc++.h>

using namespace std ;

void add(int val , int index , int start , int end , int *A , int *tree)
{
	if(start == end)
	{
		tree[index] += val ;
		A[index] += val ;
	}
	
	int mid = (start + end) / 2 ;
	if(start <= val && val < end)
	{
	   	add(val, 2 * index , start , mid , A , tree);
	}
	else
	{
		add(val, 2 * index , mid + 1 , end , A , tree);
	}
}

void build(int node, int start, int end , int *tree, int *A)
{
	cout << node << "\n" ;
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid, tree , A);
        // Recurse on the right child
        build(2*node+1, mid+1, end,tree , A);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

int main()
{
  int arr[5]	= {1,5,2,4,3} ;
  int tree[11] ;
  memset(tree,-1,sizeof(tree)) ;
  build(1,0,5,tree,arr) ;
//  for(int i : tree)
//   cout << i << " " ;
}
