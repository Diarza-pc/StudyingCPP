#include <iostream>

int main() {
    //ternary operator is a shorthand way to write an if else statement, it has the syntax: condition ? expression1 : expression2; if the condition is true, expression1 will be executed, otherwise expression2 will be executed.
    //example with if else
    int a;
    int b;
    std::cout << "Enter number 1: " << std::endl;
    std::cin >> a;
    std::cout << "Enter number 2: " << std::endl;
    std::cin >> b;
    if (a > b) {
        std::cout << "Number 1 is greater than number 2" << std::endl;
    } else if (a < b) {
        std::cout << "Number 2 is greater than number 1" << std::endl;
    } else {
        std::cout << " please enter right number" << std::endl;
    }

    //example with ternary operator
    std::string hungry;
    std::cout << "Are you hungry? (ya/no) " << std::endl;
    std::cin >> hungry;
    hungry == "ya" ? std::cout << "Want to order something?" : std::cout << "Well, we could do it later " << std::endl;

    std::string thirsty;
    std::cout << "Are you thirsty aswell? (ya/no)" << std::endl;
    std::cin >> thirsty;
    std::cout << (thirsty == "ya" ? "Want to order something to drink?" : "Well, we could do it later") << std::endl;
    return 0;
}