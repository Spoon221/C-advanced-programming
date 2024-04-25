#include <iostream>
#include <cmath>
#include "ex1.h"
#include "ex2.h"

using namespace std;

const int n = 17, m = 16;

void firstTask();
void secondTask();

int main()
{
    setlocale(LC_ALL, "Russian");
    //firstTask();
    secondTask();
	return 0;
}

void firstTask() 
{
    /*
        1.1 Ввести с клавиатуры массив Х, сост.из 17 элементов целого типа.
        расчитать элементы массива Y по формуле.
        Упорядочить массив Y по возрастанию, массив X по убыванию и сформировать новый массив R, элементами которого являются четные по индексу элементы массива Х и Y
    */ 

	int* x = new int[n];
	int* y = new int[n];
	int* r = new int[m];

	for (int i = 0; i < n; i++)
	{
		cout << "[" << i + 1 << "] = ";
		cin >> x[i];
	}

	for (int i = 0; i < n; i++)
		y[i] = cos(x[i]) > 0 ? pow(x[i], 3) - 7.5 : pow(x[i], 2) - 5 * exp(sin(x[i]));

	x = SortedDescending(x);
	y = Sorted(y);

	cout << "X = "; Output(x);
	cout << "Y = "; Output(y);

	int j = 0;
	for (int i = 0; i < n; i += 2)
	{
		r[j] = x[i];
		r[j + 1] = y[i];
		j += 2;
	}

	cout << "R = ";
	for (int i = 0; i < m; i++)
		cout << r[i] << " ";
	cout << endl;

	delete[] x;
	delete[] y;
	delete[] r;
}

void secondTask() 
{
    /*
        2.1 написать программу которая в матрице чисел A(M,N) находит все элементы, превышающие по абсолютной величине заданное число B.
        Подсчитать чисто таких элементов и записать их в массив C
    */
    int* x = new int[n];
    int* y = new int[n];
    int* r = new int[m];

    int M, N, B;
    cout << "Введите количество строк (M) и столбцов (N) для матрицы A: ";
    cin >> M >> N;

    int** A = new int* [M];
    for (int i = 0; i < M; i++) 
        A[i] = new int[N];

    cout << "Введите элементы матрицы A:" << endl;
    for (int i = 0; i < M; i++) 
    {
        for (int j = 0; j < N; j++) 
            cin >> A[i][j];
    }

    cout << "Введите значение параметра B: ";
    cin >> B;

    int* C = new int[M * N];
    int count;
    FindAndCountElements(A, M, N, B, C, count);

    cout << "Элементы, превышающие абсолютное значение: " << B << " в матрице А:" << endl;
    for (int i = 0; i < count; i++) 
        cout << C[i] << " ";
    cout << endl;

    for (int i = 0; i < M; i++) 
        delete[] A[i];
    delete[] A;
    delete[] x;
    delete[] y;
    delete[] r;
    delete[] C;
}