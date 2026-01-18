#include "Car.h"

int Car::num_cars = 0;

Car::Car():Car("TATA", "White", 39, 30.0f)
{
   std::cout << "Car() called." << std::endl;
}

Car::Car(string oem, string color, int tankCapacity, float fuel): m_oem(oem), m_color(color), m_tankCapacity(tankCapacity), m_fuel(fuel), m_speed(0) {
   std::cout << "Car(string,string,float) called." << std::endl;
   Car::num_cars++;
}

void Car::accelerate(void)
{
   m_speed += 10;
   m_fuel -= 0.5;
}

void Car::brake(void)
{
   m_speed -= 0;
}

void Car::put_fuel(float capacity)
{
   if((m_fuel + capacity) > m_tankCapacity)
   {
      std::cout << "Input limit exceeding tank capacity." << std::endl;
      return;
   }

   m_fuel += capacity;
}

void Car::display(void) const
{
   std::cout << "The " << m_color << " color " << m_oem <<  " is speeding at " << m_speed << " and it's current fuel level is " << m_fuel << std::endl;
}

int Car::car_count(void)
{
   return Car::num_cars;
}

Car::~Car()
{
   std::cout << "~Car() called." << std::endl;
   Car::num_cars--;
}

