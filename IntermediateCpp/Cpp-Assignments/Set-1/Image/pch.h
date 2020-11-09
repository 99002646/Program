//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
class Image {
	int m_x;
	int m_y;
	int m_width;
	int m_height;
public:
	Image();
	Image(int, int, int, int);
	Image(const Image&);
	void move(int, int, int, int);
	void scale(int, int);
	void resize(int, int);
	void display();
};
