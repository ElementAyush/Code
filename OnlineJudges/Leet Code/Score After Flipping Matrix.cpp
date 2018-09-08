/*
     861. Score After Flipping Matrix
 --- Left most digit of array in every row should be start with 1.
 --- Toggle columns if number of 0s are greater than 1s in every column except column 0 . 
*/

#include<bits/stdc++.h>

using namespace std ;

int matrixScore(vector<vector<int>>& A) {
        for(int i = 0 ; i < A.size() ; i++)
        {
            
                if(A[i][0] == 0)
                {
                    A[i][0] = 1 ;
                    for(int j = 1 ; j < A[i].size() ; j++)
                        A[i][j] = !A[i][j] ;        
                }
    
        }

        
        for(int j = 1 ; j < A[0].size() ; j++)
        {
            int num_of_O = 0 , num_of_1 = 0 ;
            for(int i = 0 ; i < A.size()  ; i++)
            {
                if(A[i][j] == 0)
                    num_of_O++ ;
                else
                    num_of_1++ ;
            }
            if(num_of_1 < num_of_O)
            {
                for(int i = 0 ; i < A.size() ; i++)
                    A[i][j] = !A[i][j] ;
            }
        }
        
        long long totalSum = 0 ;
        for(int i = 0 ; i < A.size() ; i++)
        {
            long long num = 0 ;
            int k = 0 ;
            for(int j = A[i].size() - 1 ; j >= 0 ; j--)
            {
                num += A[i][j] * pow(2,k) ;
                k++ ;
            }
            
            totalSum += num ;
        } 
        
        return totalSum ;
    }

int main()
{
	vector<vector<int>> A = {{0,1},{1,1}} ;
	cout << matrixScore(A) << endl ;
}
