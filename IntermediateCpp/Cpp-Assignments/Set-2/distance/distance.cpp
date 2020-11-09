#include "distance.h"
Distance::Distance() :
    m_feets(0), m_inches(0) {}
Distance::Distance(int a, int b) :
    m_feets(a), m_inches(b) {}
Distance::Distance(int d) :
    m_feets(d) {}
Distance Distance::operator+(const Distance& ref) {
    int inches = m_inches + ref.m_inches;
    int feet = m_feets + ref.m_feets;
    return Distance(feet, inches);
}
Distance Distance::operator-(const Distance& ref) {
    int inches = m_inches - ref.m_inches;
    int feet = m_feets - ref.m_feets;
    return Distance(feet, inches);
}
Distance Distance::operator*(const Distance& ref) {
    int inches = m_inches * ref.m_inches;
    int feet = m_feets * ref.m_feets;
    return Distance(feet, inches);
}
Distance& Distance:: operator++() {
    ++m_inches;
    return *this;
}
Distance Distance:: operator++(int x) {
    Distance actual(*this);
    ++m_feets;
    return actual;
}
bool Distance::operator==(const Distance& ref) {
    return m_feets == ref.m_feets && m_inches == ref.m_inches;
}

void Distance::display() {
    std::cout << m_feets << ":" << m_inches;
}
