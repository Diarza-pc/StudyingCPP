#include <iostream>
#include <windows.h>


std::string Gate() {
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    return name;
}
void Register(std::string& Register, std::string **pName);

int main() {
    std::string RegName = " ";

    Gate();
    std::string * pName = nullptr;
    if(pName == nullptr) {
        char choice;
        std::cout << "Sorry, your name hasn't registered yet\n";
        std::cout << "Would you like to register your name (y/n)?\n";
        std::cin >> choice;
        choice = tolower(choice);

        std::cin.ignore(256, '\n');
        switch(choice) {
            case 'y':
            Register(RegName, &pName);
                break;
            case 'n':
                std::cout << "You can't use the feature if your name hasnt registered yet";
                break;
            default:
                std::cout << "Please, just enter one character, y/n!";
        }
    } else {
        std::cout << "Your name already been registered";
    }

    if(pName != nullptr) {
        std::cout << "Your name has been registered!\n";
        std::cout << "Welcome, " << *pName;
    }
    
    
    return 0;
}
void Register(std::string& Register, std::string** pName) {
    std::cout  << "Please, enter enter your name again: ";
    std::getline(std::cin, Register);
    *pName = &Register;
    std::string load = "Please wait...";
    for(char c:load) {
        std::cout << c;
        Sleep(100);
    }
    std::cout << "Your name has been fully registered";
}