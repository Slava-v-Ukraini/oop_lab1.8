#pragma once
#include "DigitString.h"

class Fraction {
private:
    DigitString whole;
    unsigned short fraction;
public:
    Fraction(string wholePart = "0", unsigned short fracPart = 0);
    void Display() const;

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;

    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;
    bool operator<(const Fraction& other) const;
    bool operator>(const Fraction& other) const;
};