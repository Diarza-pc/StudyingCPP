#include <iostream>

int main() {
    std::string input;
    std::string name[10];
    int size = sizeof(name) / sizeof(name[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Input name (press q to exit) #" << i + 1 << ": ";
        std::getline(std::cin, input);
        if (input == "q") {
            break;
        } else {
            name[i] = input;
        }
    }

    std::cout << "Name that have been listed: " << '\n';

    for(int i = 0; !name[i].empty(); i++){
        std::cout << name[i];
    }

    return 0;
}