#include "ex1.h"
#include <iostream>

void Output(int* a, int n) 
{
    for (int i = 0; i < n; i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;
}

int* Sorted(int* a, int n) 
{
    int* sortedArray = new int[n];
    for (int i = 0; i < n; i++) 
    {
        sortedArray[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            if (sortedArray[i] > sortedArray[j]) 
            {
                int x = sortedArray[i];
                sortedArray[i] = sortedArray[j];
                sortedArray[j] = x;
            }
        }
    }

    return sortedArray;
}

int* SortedDescending(int* a, int n) 
{
    int* sortedArray = new int[n];
    for (int i = 0; i < n; i++) 
    {
        sortedArray[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = i; j < n; j++) 
        {
            if (sortedArray[i] < sortedArray[j]) 
            {
                int x = sortedArray[i];
                sortedArray[i] = sortedArray[j];
                sortedArray[j] = x;
            }
        }
    }

    return sortedArray;
}