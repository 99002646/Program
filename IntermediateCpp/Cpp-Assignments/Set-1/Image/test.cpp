//#include "pch.h"

#include"Image.cpp"
#include<iostream>
#include<gtest/gtest.h>

TEST(Image, DisplayTest) {
	Image a1(100, 200, 500,1000);
	std::string ExpectedOut = "100,200,500,1000";
	testing::internal::CaptureStdout();
	a1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
