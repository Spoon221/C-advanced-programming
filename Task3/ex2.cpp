#include "ex2.h"

char* reverseString(const char* str) 
{
    int length = 0;
    const char* temp = str;

    while (*temp != '\0') 
    {
        length++;
        temp++;
    }

    char* reversedStr = new char[length + 1];
    reversedStr[length] = '\0';

    for (int i = 0; i < length; i++)
        reversedStr[i] = str[length - i - 1];

    return reversedStr;
}