//#include"ip_address.h"

#include"IP_Address.cpp"
#include<gtest/gtest.h>
//#include<iostream>
TEST(IPAddress,Test1)
{
    IPAddress I1;
    EXPECT_EQ("C",I1.getIPClass(000));

}

int main(int argumentc, char **argumentv) 
    {
		testing::InitGoogleTest(&argumentc, argumentv);
		return RUN_ALL_TESTS();
    }
