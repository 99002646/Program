#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "shape3.h"

class Circle : public IShape {
  double m_radius;

public:
 // const static double PI = 22.0/7.0;
  Circle();
  Circle(double r);
  double area();
  double circumference();
};

#endif
