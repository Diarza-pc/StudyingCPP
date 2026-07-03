#include <iostream>

int main (){
    //constant is a variable that cannot be changed after it has been assigned a value, for example:
    const double pi = 3.14159; //pi is a constant variable that cannot be changed
    const int radius = 625; 
    const double circumference = 2 * pi * radius;

    const int length = 10;
    const int width = 5;
    const int area = length * width;

    //So basically, we can use the constant variable to store values that we know will not change throughout the program, such as mathematical constants like pi, or physical constants like the speed of light. This can help improve code readability and prevent accidental changes to important values.
    //its useful when we want to ensure that a value remains constant throughout the program, and it can also help improve code readability by making it clear that a value is not meant to be changed. Additionally, using constants can help prevent accidental changes to important values, which can lead to bugs and errors in the program.
    //or even when we don't want anyone to change the value of a variable, we can use a constant to ensure that it remains unchanged. This can be particularly useful in situations where we want to ensure that a value is not accidentally modified, such as when working with sensitive data or when implementing security measures.
    std::cout << "The value of pi is: " << pi << "cm" << '\n';
    std::cout << "The radius is: " << radius <<"cm" << '\n';
    std::cout << "The circumference is: " << circumference << "cm" << '\n';
    std::cout << "The length is: " << length << "cm" << '\n';
    std::cout << "The width is: " << width << "cm" << '\n';
    std::cout << "The area is: " << area << "cm^2";
    return 0;
}