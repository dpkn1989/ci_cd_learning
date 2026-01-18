#include <iostream>
#include<vector>
#include <string>
#include "Car.h"

int main()
{
   std::cout << "Jai Sriram!!!" << std::endl;

   std::vector<std::string> names{"Jai Ganesha!", "Jai Hanuman!"};
   names.push_back("Om Namah Sivaya!");
   names.push_back("Om Srimatrey namaha!");

   for(auto &s : names)
   {
      std::cout << s << std::endl;
   }

   Car c1, c2("Ford", "Black", 39, 24.0f), c3("Honda", "Grey", 45, 36.0f);
   c1.accelerate();
   c1.accelerate();
   c1.accelerate();
   c1.accelerate();
   c1.accelerate();
   c1.accelerate();
   c1.display();
   
   c2.accelerate();
   c2.accelerate();
   c2.accelerate();
   c2.accelerate();
   c2.accelerate();
   c2.brake();
   c2.display();
   
   c2.accelerate();
   c2.accelerate();
   c2.brake();
   c2.display();
   
   std::cout << "Total Cars created till now: " << Car::car_count() << std::endl;
   
   return 0;
}   
