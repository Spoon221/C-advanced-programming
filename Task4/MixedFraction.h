#pragma once
#include "Fraction.h"

class MixedFraction : public Fraction 
{
private:
    int wholePart;

public:
    MixedFraction();
    MixedFraction(int whole, int num, int denom);
    MixedFraction(const MixedFraction& other);
    ~MixedFraction();

    double ToDecimal() const;
};