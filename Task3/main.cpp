#include <iostream>
#include <cmath>
#include "ex1.h"
#include "ex2.h"

using namespace std;

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
    // 3.1 дан массив символов. Подсчитать, сколько различных символов встречается в нем. Вывести их на экран

    const int size = 15;
    char arr[size] = { 'a', 'b', 'c', 'a', 'd', 'e', 'b', 'f', 'g', 'a', 'c', 'h', 'i', 'j', 'k' };

    CountUniqueCharacters(arr, size);
}

void secondTask() 
{
    // 4.1  задана строка. Построить новую строку, в которой все символы записаны в обратном порядке

    const char* inputStr = "Hello, World!";
    cout << "Оригинальная строка: " << inputStr << endl;

    char* reversedStr = reverseString(inputStr);
    cout << "Перевернутая строка: " << reversedStr << endl;

    delete[] reversedStr;
}