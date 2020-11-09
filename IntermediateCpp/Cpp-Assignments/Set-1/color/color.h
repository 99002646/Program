#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED
//#pragma once

#include "gtest/gtest.h"
class Color
{

    int m_r;
    int m_g;
    int m_b;
    enum color_t {red,green,blue};
public:
       Color();
       Color(int,int,int);
       Color(int);
       Color(color_t);
       int getred();
       int getgreen();
       int getblue();
       void invert();
       void display();

};
#endif // COLOR_H_INCLUDED
