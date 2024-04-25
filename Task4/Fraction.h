#pragma once

using namespace std;

class Fraction 
{
protected:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int num, int denom);
    Fraction(const Fraction& other);
    ~Fraction();

    double CalculatePercentage() const;
    int SumOfDenominatorDigits() const;

    string ToString() const;

    Fraction& operator=(const Fraction& other);
    bool operator==(const Fraction& other) const;

    friend ostream& operator<<(ostream& os, const Fraction& fraction);
    friend istream& operator>>(istream& is, Fraction& fraction);
};