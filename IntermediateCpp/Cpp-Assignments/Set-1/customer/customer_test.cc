//#include "customer.h"
#include"customer.cc"
#include<iostream>
#include<gtest/gtest.h>

TEST(Customer, DefaultConstructor) {
	Customer a1;
	EXPECT_EQ(0, a1.getBalance());
}
TEST(Customer, ParameterizedConstructor) {
	Customer a1(1001,98765,1,"abc",5000.0);
	EXPECT_EQ(5000.0, a1.getBalance());

}
TEST(Customer, CopyConstructor) {
	Customer a1(1001,98765,1,"abc",5000.0);
	Customer a2(a1);
	EXPECT_EQ(5000.0, a2.getBalance());

}
TEST(Customer, CreditTest) {
	Customer a1(1001,98765,1,"abc",5000.0);
	a1.credit(3000);
	EXPECT_EQ(8000.0, a1.getBalance());

}
TEST(Customer, makecallTest) {
	Customer a1(1001,98765,1,"abc",5000.0);
	a1.makecall(98765);
	EXPECT_EQ(5000.0, a1.getBalance());
}

TEST(Customer, displayTest) {
	Customer a1(1001,98765,1,"abc",5000.0);
	std::string ExpectedOut = "1001,98765,1,abc,5000.0\n";
	testing::internal::CaptureStdout();
	a1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
