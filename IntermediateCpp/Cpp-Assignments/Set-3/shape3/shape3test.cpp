#include<gtest/gtest.h>
#include "triangle.h"
#include "polygon.h"
#include "shape3.h"
#include <math.h>
#include"rectangle.h"
#include "circle.h"
TEST(shape,tri)
{
    Polygon *t;
    t=new Triangle(3,4,5);
      EXPECT_EQ(12,t->circumference());
       EXPECT_EQ(6,t->area());

       IShape *t1;
       t1=new Circle(3.0);
        EXPECT_EQ(18.84,t1->circumference());

       //ASSERT_EQ(28.26,t1->area());
    /*std::string ExpectedOut="12\n";
    testing::internal::CaptureStdout();
    t->circumference.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(),ActualOut.c_str());*/
}
TEST(shape1,tri)
{
     Polygon *p;
       p=new Rectangle(1,2);
        EXPECT_EQ(3,p->circumference());
       EXPECT_EQ(2,p->area());
}
