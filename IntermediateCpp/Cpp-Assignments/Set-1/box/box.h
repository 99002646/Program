//#pragma once
#include "gtest/gtest.h"
class Box {
	int m_length;
	int m_breadth;
	int m_height;
public:
	Box();
	Box(int, int, int);
	Box(int);
	Box(const Box&);
	int length();
	int breadth();
	int height();
	double volume();
	void display();
};
