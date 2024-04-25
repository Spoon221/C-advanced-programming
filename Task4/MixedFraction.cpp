/*
    6.1     ����� �������� � ��� ����: ���������� �����: ���������, �����������.
    �����-������� � ��� ����: ��������� �����: ����� �����, ��������� � �����������.
    �������-����� ��������� ������ ������� ������-�������: ����������� ��������� ����� � ���� ����������� ������������� �����
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