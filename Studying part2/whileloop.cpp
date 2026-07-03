#include <iostream>

int main() {
    //while loop command is basically to keep loping if the condition is false, just like if, but looping.
    std::string name;

    while(name.empty()) {
        std::cout << "Enter your name: " << std::endl;
        std::getline(std::cin, name);
    }
    std::cout << "Welcome " << name << '\n';

    return 0;
}