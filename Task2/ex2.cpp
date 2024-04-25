#include "ex2.h"
#include <iostream>

void FindAndCountElements(int** A, int M, int N, int B, int* C, int& count) 
{
    count = 0;
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            if (abs(A[i][j]) > B) 
            {
                C[count] = A[i][j];
                count++;
            }
        }
    }
}