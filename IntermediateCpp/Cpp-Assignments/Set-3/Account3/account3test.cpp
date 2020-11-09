#include<gtest/gtest.h>
#include"account3.h"
#include"creditacc.h"
#include"savingsacc.h"
using namespace std;

TEST(CreditAccount,DefaultConstructor) {
    AccountBase *a;
   a= new CreditAccount("12pm","pm",50000);
//    CreditAccount ca1("thameem","xyz",500);
    EXPECT_EQ(48000,a->debit(2000));
    EXPECT_EQ(49200,a->credit(1200));

}
