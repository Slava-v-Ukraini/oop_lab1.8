#pragma once
#include <string>
#include <iostream>
using namespace std;

class DigitString {
private:
    string value;
public:
    DigitString(string val = "0");
    string GetValue() const;
    void SetValue(string val);
    void Display() const;

    DigitString operator+(const DigitString& other) const;
    DigitString operator-(const DigitString& other) const;
    DigitString operator*(const DigitString& other) const;

    bool operator==(const DigitString& other) const;
    bool operator!=(const DigitString& other) const;
    bool operator<(const DigitString& other) const;
    bool operator>(const DigitString& other) const;
};