#include <iostream>

int main () {

    std::cout << "********** Temperature converter **********" << '\n';
    char unit;
    double temp;

    std::cout << "What unit do you want to convert to (currently temp used celcius)? (F/K/R)" << '\n';
    std::cin >> unit;
    
    if (unit == 'F' || unit == 'f') {
        std::cout << "Please enter the value in celcius: " << std::endl;
        std::cin >> temp;
        double result =  (temp * 9/5) + 32;
        std::cout << "The temperature in Fahrenheit is: " << result << std::endl;
    } else if (unit == 'K' || unit == 'k') {
        std::cout << "Please enter the value in celcius: " << std::endl;
        std::cin >> temp;
        double result =  temp + 273.15;
        std::cout << "The temperature in Kelvin is: " << result << std::endl;
    } else if (unit == 'R' || unit == 'r') {
        std::cout << "Please enter the value in celcius: " << std::endl;
        std::cin >> temp;
        double result =  (temp + 273.15) * 9/5;
        std::cout << "The temperature in Rankine is: " << result << std::endl;
    }


    std::cout << "*******************************************" << '\n';

    return 0;
}