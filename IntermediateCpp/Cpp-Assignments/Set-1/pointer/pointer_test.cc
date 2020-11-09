
#include<iostream>
//#include "pointer.h"
#include"pointer.cc"
#include <gtest/gtest.h>

TEST(Point, parameter)
 {
	Point P1(4, 3);
	EXPECT_EQ(5, P1.distanceFromOrigin());
	EXPECT_EQ(0,P1.quadrant());
	EXPECT_EQ(false, P1.isOrigin());
	EXPECT_EQ(false, P1.isOnXaxis());
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
