#include "ex1.h"
#include <iostream>

void CountUniqueCharacters(char* arr, int size) 
{
    int count[256] = { 0 };
    int uniqueCount = 0;

    for (int i = 0; i < size; i++)
        count[(int)arr[i]]++;

    std::cout << "���������� �������� � �������: ";
    for (int i = 0; i < 256; i++) 
    {
        if (count[i] > 0) 
        {
            uniqueCount++;
            std::cout << (char)i << " ";
        }
    }

    std::cout << std::endl;
    std::cout << "����� ���������� ���������� ��������: " << uniqueCount << std::endl;
}