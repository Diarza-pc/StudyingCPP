#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter the value of a: " << '\n';
    std::cin >> a;

    std::cout << "Enter the value of b: " << '\n';
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    std::cout << "The value of the hypotenuse is: " << c << '\n';

    return 0;
}