//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
#include<iostream>
Image::Image():m_x(0),m_y(0),m_width(0),m_height(0){}
Image::Image(int a, int b, int c, int d) {
	m_x = a;
	m_y = b;
	m_width = c;
	m_height = d;
}
Image::Image(const Image& ref) {
	m_x = ref.m_x;
	m_y = ref.m_y;
	m_width = ref.m_width;
	m_height = ref.m_height;
}
void Image::move(int a, int b ,int c,int d) {
	m_x = a;
	m_y = b;
	m_width = c;
	m_height = d;
}
void Image::scale(int a, int b) {
	m_x = a;
	m_y = b;
}
void Image::resize(int c, int d) {
	m_width = c;
	m_height = d;
}
void Image::display() {
	std::cout << m_x << "," << m_y << "," << m_width << "," << m_height;
}

