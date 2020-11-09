//#include "box.h"
#include"box.cpp"
#include<iostream>
#include<gtest/gtest.h>

TEST(Box, defaultConstructor) {
  Box b1;
  EXPECT_EQ(0, b1.length());
  EXPECT_EQ(0, b1.breadth());
}
TEST(Box, parameterConstructor) {
	Box b2(10,20,30);
	EXPECT_EQ(10, b2.length());
	EXPECT_EQ(20, b2.breadth());
	EXPECT_EQ(30, b2.height());
	EXPECT_EQ(6000, b2.volume());
}
TEST(Box, copyConstructor) {
	Box b3(10, 20, 3);
	Box b4(b3);
	EXPECT_EQ(10, b4.length());
	EXPECT_EQ(20, b4.breadth());
	EXPECT_EQ(3, b4.height());
	EXPECT_EQ(600, b4.volume());
}
/*TEST(Box, parameterConstructor1) {
	Box b5(10);
	EXPECT_EQ(0, b5.volume());
}*/
TEST(Box, Display) {
	Box b6(10, 25, 60);
	std::string ExpectedOut = "10,25,60";
	testing::internal::CaptureStdout();
	b6.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}


int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
