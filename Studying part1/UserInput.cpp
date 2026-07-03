#include <iostream>

int main() {
   //cout >> = insertion operator
   //cin << = extraction operator

   //std::string name;
   //std::cout << "What is your name? ";
   //std::cin >> name;

   int age;
   std::cout << "How old are you currently? ";
   std::cin >> age;

   //there are condition that we need get the full name of the user.
   //in that case, we use getline() function to read the space in the name.
   std::string fullname;
    std::cout << "Can you tell me your full name? ";
    std::getline(std::cin >> std::ws, fullname);
    //you need to use std::ws to ignore any leading whitespace characters before reading the full name.

    //std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "You are... " << fullname << "?" << std::endl;
    std::cout << "And you were.. " << age << "?" << std::endl;
    return 0;
}