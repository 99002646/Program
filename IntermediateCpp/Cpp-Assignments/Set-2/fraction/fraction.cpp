#include "fraction.h"
Fraction::Fraction() :
    m_numerator(0), m_denominator(0) {}
Fraction::Fraction(int a, int b) :
    m_numerator(a), m_denominator(b) {}
Fraction::Fraction(int d) :
    m_numerator(d) {}
Fraction Fraction::operator+(const Fraction& ref) {
    int den = m_denominator + ref.m_denominator;
    int num = m_numerator + ref.m_numerator;
    return Fraction(num, den);
}
Fraction Fraction::operator-(const Fraction& ref) {
    int den = m_denominator - ref.m_denominator;
    int num = m_numerator - ref.m_numerator;
    return Fraction(num, den);
}
Fraction Fraction::operator*(const Fraction& ref) {
    int den = m_denominator * ref.m_denominator;
    int num = m_numerator * ref.m_numerator;
    return Fraction(num, den);
}
Fraction& Fraction:: operator++() {
    ++m_denominator;
    return *this;
}
Fraction Fraction:: operator++(int x) {
    Fraction actual(*this);
    ++m_numerator;
    return actual;
}
bool Fraction::operator==(const Fraction& ref) {
    return m_numerator == ref.m_numerator && m_denominator == ref.m_denominator;
}

void Fraction::display() {
    std::cout << m_numerator << ":" << m_denominator;
}
void Fraction::Simplify() {
    std::cout << m_numerator / m_denominator;
}
void Fraction::isSimplify() {
}
