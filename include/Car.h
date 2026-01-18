#pragma once

#include <iostream>
#include <string>

using namespace std;

class Car{
   string m_oem;
   string m_color;
   int m_speed;
   float m_fuel;
   int m_tankCapacity;

   static int num_cars;

public:

   Car();
   Car(string oem, string color, int tankCapacity, float fuel);

   void accelerate(void);
   void brake(void);
   void put_fuel(float capacity);
   void display(void) const;

   static int car_count(void);
   
   ~Car();
};
