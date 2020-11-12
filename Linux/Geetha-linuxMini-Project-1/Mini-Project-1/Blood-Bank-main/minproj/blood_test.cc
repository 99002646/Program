#include "Donors.h"
#include "Bloodgrp.h"

#include "Blooddb.h"
#include <gtest/gtest.h>
namespace {

class BloodDbTest : public ::testing::Test {


  protected:
    void SetUp() {
       // obj.addDonor("geeth", "8553376890", "geethu1998@gmail.com", "O+ve", 350,180);
       // obj.addDonor("geeth1", "8553336990", "geeth11998@gmail.com", "B+ve",789 ,480);

    }
    void TearDown()
    {

    }
   // public:
    //Donors *dnr;
    blooddb obj;
};

TEST_F(BloodDbTest, addDonor) {
    obj.addDonor("geeth", "8553376890", "geethu1998@gmail.com", "O+ve", 350,180);
    obj.addDonor("geeth1", "8953376890", "geethu11998@gmail.com", "B+ve", 390,100);
    EXPECT_NE((Bloodgrp*)NULL, obj.Searchdonor("O+ve"));
}


}

