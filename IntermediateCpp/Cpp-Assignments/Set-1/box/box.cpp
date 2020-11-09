#include "box.h"
#include<iostream>
Box::Box():m_length(0), m_breadth(0), m_height(0){}
Box::Box(int a, int b, int c): m_length(a),m_breadth(b),m_height(c){}
Box::Box(int a):m_length(a),m_breadth(a),m_height(a){}
Box::Box(const Box& ref) {
	m_length = ref.m_length;
	m_breadth = ref.m_breadth;
	m_height = ref.m_height;
}
int Box::length() {
	return m_length;
}
int Box::breadth() {
	return m_breadth;
}
int Box::height() {
	return m_height;
}
double Box::volume() {
	int a;
	a = m_length * m_breadth * m_height;
	return a;
}
void Box::display() {
	std::cout << m_length << "," << m_breadth << "," << m_height;
}
