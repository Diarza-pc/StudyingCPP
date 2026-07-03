#include <iostream>

int main() {
    char opr;
    double num1, num2, result;
    std::cout << "*****************Simple Calculator*****************" << std::endl;
    std::cout << "Enter operator you want to use (+, -, *, /): " << std::endl;
    std::cin >> opr;
    std::cout << "Enter number 1: " << std::endl;
    std::cin >> num1;
    std ::cout << "Enter number 2: " << std::endl;
    std::cin >> num2;

    switch (opr) {
        case '+':
           result = num1 + num2;
           break;
        case '-':
           result = num1 - num2;
           break;
        case '*':
           result = num1 * num2;
           break;
        case '/':
           result = num1 / num2;
           break;
    }

    std::cout << "Result: " << result << std::endl;
    std::cout << "***************************************************" << std::endl;
    return 0;
}