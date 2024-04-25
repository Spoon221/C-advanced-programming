/*
    6.1     класс родитель и его поля: правильная дробь: числитель, знаменатель.
    Класс-потомок и его поля: смешанная дробь: целая часть, числитель и знаменатель.
    функция-метод обработки данных объекта класса-потомка: представить смешанную дробь в виде десятичного вещественного числа
*/

#include "MixedFraction.h"
#include <iostream>

using namespace std;

MixedFraction::MixedFraction() : wholePart(0), Fraction() {}

MixedFraction::MixedFraction(int whole, int num, int denom) : wholePart(whole), Fraction(num, denom) {}

MixedFraction::MixedFraction(const MixedFraction& other) : wholePart(other.wholePart), Fraction(other) {}

MixedFraction::~MixedFraction() 
{
    cout << "MixedFraction object destroyed" << endl;
}

double MixedFraction::ToDecimal() const 
{
    return wholePart + static_cast<double>(numerator) / denominator;
}