#include<bits/stdc++.h>

using namespace std ;

int maxSubArraySum(int *a, int n)
{
	int maximum_sum = 0 , ending_so_far = 0 ;
	for(int i = 0 ; i < n ; i++)
	{
		ending_so_far += a[i] ;
		if(maximum_sum < ending_so_far)
		  maximum_sum = ending_so_far ;
		
		if(ending_so_far < 0)
		  ending_so_far = 0 ;
	}
	return maximum_sum ;
}

int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
