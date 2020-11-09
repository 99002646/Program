//#include "pch.h"


#include "pch.cpp"
#include<gtest/gtest.h>

TEST(a, b)
{
		Mytime a1;
		Mytime b(0, 0, 0);
		EXPECT_EQ(true, a1 == b);
		a1++;
		Mytime c(0, 1, 0);
		a1.display();
		EXPECT_EQ(false, a1 == c);
}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
