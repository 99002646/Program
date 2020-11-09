
//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#ifndef FractionN_H_INCLUDED
#define FractionN_H_INCLUDED

class Fraction {
    int m_numerator;
    int m_denominator;
public:
    Fraction();
    Fraction(int, int);
    Fraction(int);
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction& operator++();
    Fraction operator++(int);
    bool operator==(const Fraction&);
    void Simplify();
    void isSimplify();
    void display();
};


#endif // FractionN_H_INCLUDED
