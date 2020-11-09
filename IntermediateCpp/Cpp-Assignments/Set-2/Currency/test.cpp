//#include "pch.h"
#include"pch.cpp"
#include<gtest/gtest.h>

TEST(Currency_values, DefaultConstructor)
{
	Currency c(20,95);
	Currency c1(11);
	EXPECT_EQ(0, c1.rupees());
	EXPECT_EQ(20,c.rupees());
	Currency c2(10, 99);
	c2++;
	EXPECT_EQ(100, c2.paise());
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
