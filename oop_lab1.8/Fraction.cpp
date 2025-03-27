#include <string>
#include <iostream>
#include "Fracton.h"

using namespace std;

Fraction::Fraction(string wholePart, unsigned short fracPart) : whole(wholePart), fraction(fracPart) {}

void Fraction::Display() const {
    whole.Display();
    cout << "." << fraction;
}

Fraction Fraction::operator+(const Fraction& other) const {
    unsigned short newFraction = fraction + other.fraction;
    DigitString newWhole = whole + other.whole;
    if (newFraction >= 100) {
        newFraction -= 100;
        newWhole = newWhole + DigitString("1");
    }
    return Fraction(newWhole.GetValue(), newFraction);
}

Fraction Fraction::operator-(const Fraction& other) const {
    DigitString newWhole = whole - other.whole;
    unsigned short newFraction = fraction - other.fraction;
    return Fraction(newWhole.GetValue(), newFraction);
}

Fraction Fraction::operator*(const Fraction& other) const {
    int wholePart = stoi(whole.GetValue()) * stoi(other.whole.GetValue());
    int cross1 = stoi(whole.GetValue()) * other.fraction;
    int cross2 = stoi(other.whole.GetValue()) * fraction;
    int fracPart = (fraction * other.fraction) / 100;
    int totalFrac = cross1 + cross2 + fracPart;

    wholePart += totalFrac / 100;
    totalFrac = totalFrac % 100;

    return Fraction(to_string(wholePart), totalFrac);
}

bool Fraction::operator==(const Fraction& other) const {
    return whole == other.whole && fraction == other.fraction;
}

bool Fraction::operator!=(const Fraction& other) const {
    return !(*this == other);
}

bool Fraction::operator<(const Fraction& other) const {
    if (whole < other.whole) return true;
    if (whole == other.whole) return fraction < other.fraction;
    return false;
}

bool Fraction::operator>(const Fraction& other) const {
    return other < *this;
}