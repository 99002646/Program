//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
class Distance{
    int m_feets;
    int m_inches;
  public:


      Distance();
      Distance(int,int);
      Distance(int);


      Distance operator+(const Distance&);

      Distance operator-(const Distance& ref);
      Distance operator*(const Distance& ref);
      Distance& operator++();
      Distance operator++(int);
      bool operator< (const Distance&);
      bool operator> (const Distance&);


      bool operator==(const Distance&);

      void display();



};

