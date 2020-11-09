#include "fraction.h"
#include"fraction.cpp"
TEST(Fraction, OpPlusOverload) {
	Fraction a(3, 15);
	Fraction a1(6, 2);
	Fraction a2 = a + a1;
	std::string fractionExpectation = "9:17";
	testing::internal::CaptureStdout();
	a2.display();
	std::string fractionReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(fractionExpectation.c_str(), fractionReality.c_str());
}
TEST(Fraction, OpMinusOverload) {
	Fraction a(25, 25);
	Fraction a1(2, 1);
	Fraction a2 = a - a1;
	std::string fractionExpectation = "23:24";
	testing::internal::CaptureStdout();
	a2.display();
	std::string fractionReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(fractionExpectation.c_str(), fractionReality.c_str());
}
TEST(Fraction, OpMulOverload) {
	Fraction a(13, 10);
	Fraction a1(3, 2);
	Fraction a2 = a * a1;
	std::string fractionExpectation = "39:20";
	testing::internal::CaptureStdout();
	a2.display();
	std::string fractionReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(fractionExpectation.c_str(), fractionReality.c_str());
}
TEST(Fraction, OpEqualityOverload) {
	Fraction a(25, 15);
	Fraction a1(25, 15);
	a == a1;
	std::string fractionExpectation = "25:15";
	testing::internal::CaptureStdout();
	a.display();
	std::string fractionReality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(fractionExpectation.c_str(), fractionReality.c_str());
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
