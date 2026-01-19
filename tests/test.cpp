#include <gtest/gtest.h>
#include "Car.h"

struct Car_Test : public testing::Test
{
   Car c1,c2,c3;
   
   Car_Test(): c1("Benz", "Blue", 40, 24.5f), 
               c2("BMW", "Black", 35, 36.3f), 
               c3() 
   {}
   
   void SetUp() {}
   void TearDown() {}
};

TEST_F(Car_Test, StaticCountTest)
{
   ASSERT_EQ(Car::car_count(), 3);
}

TEST(CAR_CLASS, Constructor_case)
{
   Car c;
   
   ASSERT_EQ(Car::car_count(),1);
}

int main(int argc, char** argv)
{
   testing::InitGoogleTest(&argc,argv);
   
   return RUN_ALL_TESTS();
}
