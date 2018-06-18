#include<bits/stdc++.h>

std :: vector<int> v ;

void swap(int a , int b)
{
	int temp = v[a] ;
	v[a] = v[b] ;
	v[b] = temp ;
}

int partition(int start, int end)
{
	int pIndex = start ;
	int pivot = v[end] ;
	
	for(int i = start ; i < end ; i++)
	{
		if(v[i] <= pivot)
		{
		swap(i,pIndex);
		pIndex++ ;
		}
    }
    swap(pIndex,end) ;
    
return pIndex ;
}

void quickSort(int start , int end)
{
	if(start < end)
	{
		int pIndex = partition(start,end);
		quickSort(start,pIndex-1) ;
		quickSort(pIndex , end) ;
	}
}

int main()
{
  for(int i = 10 ; i > 0 ; i--)
   v.push_back(i) ;
   
   quickSort(0,9);
   
   for(int i = 0 ; i < 10 ; i++)
    std :: cout << v[i] << " " ; 
}
