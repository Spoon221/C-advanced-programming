/*
    5.1     класс - родитель и его поля : правильная дробь : числитель, знаменатель.
    функция-метод 1 обработки данных: выразить значение дроби в процентах.
    функция-метод 2 обработки данных: найти сумму цифр значения знаменателя
*/  

#include "Fraction.h"
#include <iostream>
#include <sstream>

using namespace std;

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

Fraction::Fraction(const Fraction& other) : numerator(other.numerator), denominator(other.denominator) {}

Fraction::~Fraction() 
{
    cout << "Fraction object destroyed" << endl;
}

double Fraction::CalculatePercentage() const 
{
    return static_cast<double>(numerator) / denominator * 100;
}

int Fraction::SumOfDenominatorDigits() const 
{
    int sum = 0;
    int temp = denominator;
    while (temp != 0) 
    {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

string Fraction::ToString() const 
{
    stringstream ss;
    ss << numerator << "/" << denominator;
    return ss.str();
}

Fraction& Fraction::operator=(const Fraction& other) 
{
    if (this != &other) 
    {
        numerator = other.numerator;
        denominator = other.denominator;
    }
    return *this;
}

bool Fraction::operator==(const Fraction& other) const 
{
    return (numerator == other.numerator) && (denominator == other.denominator);
}

ostream& operator<<(ostream& os, const Fraction& fraction) 
{
    os << fraction.numerator << "/" << fraction.denominator;
    return os;
}

istream& operator>>(istream& is, Fraction& fraction) 
{
    is >> fraction.numerator >> fraction.denominator;
    return is;
}