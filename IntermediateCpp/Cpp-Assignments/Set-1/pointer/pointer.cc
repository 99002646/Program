
#include<iostream>
#include "pointer.h"
#include<math.h>
enum Quadrant {
	Q1=0, Q2=1,
	Q3=2,
	Q4=3
};
Point::Point():m_x(0),m_y(0){}
Point::Point(int a,int b):m_x(a),m_y(b){}
Point::Point(const Point& ref) {
	m_x = ref.m_x;
	m_y = ref.m_y;
}
double Point::distanceFromOrigin() {
	int dis;
	int a;
	a = pow(m_x, 2) + pow(m_y, 2);
	dis = pow(a, 0.5);
	return dis;
}
int Point::quadrant() {
	if (m_x<0 && Point::m_y < 0) {
		return Q4;
	}
	else if(m_x<0 && m_y>-1){
		return Q3;
	}
	else if (m_x > -1 && m_y < 0) {
		return Q2;
	}
	else {
		return Q1;
	}
}
int Point::isOrigin() {
	if (m_x == 0 && m_y == 0) {
		return true;
	}
	else {
		return false;
	}
}
int Point::isOnXaxis() {
	if (m_y == 0) {
		return true;
	}
	else {
		return false;
	}
}
int Point::isOnYaxis() {
	if (m_x == 0) {
		return true;
	}
	else {
		return false;
	}
}
void Point::display() {
	std::cout << m_x << "," << m_y;
}

