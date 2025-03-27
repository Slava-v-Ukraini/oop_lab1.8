#include "DigitString.h"
#include <stdexcept>

DigitString::DigitString(string val) : value(val) {}

string DigitString::GetValue() const { return value; }
void DigitString::SetValue(string val) { value = val; }
void DigitString::Display() const { cout << value; }

DigitString DigitString::operator+(const DigitString& other) const {
    return DigitString(to_string(stoi(value) + stoi(other.value)));
}

DigitString DigitString::operator-(const DigitString& other) const {
    return DigitString(to_string(stoi(value) - stoi(other.value)));
}

DigitString DigitString::operator*(const DigitString& other) const {
    return DigitString(to_string(stoi(value) * stoi(other.value)));
}
bool DigitString::operator==(const DigitString& other) const { return value == other.value; }
bool DigitString::operator!=(const DigitString& other) const { return value != other.value; }
bool DigitString::operator<(const DigitString& other) const { return stoi(value) < stoi(other.value); }
bool DigitString::operator>(const DigitString& other) const { return stoi(value) > stoi(other.value); }