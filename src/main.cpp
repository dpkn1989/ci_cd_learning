#include <iostream>
#include<vector>
#include <string>

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

   return 0;
}   
