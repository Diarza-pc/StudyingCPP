#include <iostream>

std::string fullname(std::string firstname, std::string lastname);
void sup() {
    std::cout << "Your first/last name are: ?\n"; 
}

int main() {
    std::string firstname;
    sup();
    std::cin >> firstname;
    std::string lastname;
    sup();
    std::cin >> lastname;
    std::string fn = fullname(firstname, lastname);

    std::cout << "Sup " << fn;
    return 0;
}

std::string fullname(std::string firstname, std::string lastname) {
    return firstname + " " + lastname;
}