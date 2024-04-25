#include "ex1.h"
#include <iostream>
#include <cmath>

using namespace std;

const int n = 17, m = 16;

void Output(int* a) 
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}

int* Sorted(int* a) 
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}

	return a;
}

int* SortedDescending(int* a)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (a[i] < a[j])
			{
				int x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	return a;
}