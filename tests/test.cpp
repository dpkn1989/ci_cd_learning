#include <gtest/gtest.h>
#include "Car.h"

TEST(CAR_CLASS, Constructor_case)
{
   Car c;
   
   ASSERT_EQ(Car::car_count(),3);
}

int main(int argc, char** argv)
{
   testing::InitGoogleTest(&argc,argv);
   
   return RUN_ALL_TESTS();
}
