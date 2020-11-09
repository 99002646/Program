//#include "distance.h"
#include"distance.cpp"
//#include "pch.h"
#include<gtest/gtest.h>

TEST(Distance, OpPlusOverload) {
	Distance a(3, 1);
	Distance a1(4, 3);
	Distance a2 = a + a1;
	std::string distanceExpectation = "7:4";
	testing::internal::CaptureStdout();
	a2.display();
	std::string distanceReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(distanceExpectation.c_str(), distanceReality.c_str());
}
TEST(Distance, OpMinusOverload) {
	Distance a(5, 15);
	Distance a1(3, 10);
	Distance a2 = a - a1;
	std::string distanceExpectation = "2:5";
	testing::internal::CaptureStdout();
	a2.display();
	std::string distanceReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(distanceExpectation.c_str(), distanceReality.c_str());
}
TEST(Distance, OpMulOverload) {
	Distance a(12, 3);
	Distance a1(3, 6);
	Distance a2 = a * a1;
	std::string distanceExpectation = "36:18";
	testing::internal::CaptureStdout();
	a2.display();
	std::string distanceReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(distanceExpectation.c_str(), distanceReality.c_str());
}
TEST(Distance, OpEqualityOverload) {
	Distance a(6, 6);
	Distance a1(6, 6);
	a == a1;
	std::string distanceExpectation = "6:6";
	testing::internal::CaptureStdout();
	a.display();
	std::string distanceReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(distanceExpectation.c_str(), distanceReality.c_str());
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
