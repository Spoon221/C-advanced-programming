#include <iostream>
#include <cmath>
#include "ex1.h"
//#include "ex2.h"

using namespace std;

const int n = 17, m = 16;

void firstTask();

int main()
{
    setlocale(LC_ALL, "Russian");
    firstTask();
	return 0;
}

void firstTask() 
{
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* x = new int[n];
    int* y = new int[n];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "[" << i + 1 << "] = ";
        cin >> x[i];
    }

    for (int i = 0; i < n; i++) 
        y[i] = cos(x[i]) > 0 ? pow(x[i], 3) - 7.5 : pow(x[i], 2) - 5 * exp(sin(x[i]));

    int* sortedX = SortedDescending(x, n);
    int* sortedY = Sorted(y, n);

    cout << "X = "; Output(sortedX, n);
    cout << "Y = "; Output(sortedY, n);

    delete[] x;
    delete[] y;
    delete[] sortedX;
    delete[] sortedY;
}