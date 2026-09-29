#include <iostream>
#include <cmath>

int main() {
    
    double a = 6.56;
    double b = 9;
    double z;

    //there are many math function, but the basic are like:
    //z = max(a, b); it will return max value between a and b
    //z = min(a, b); it will return min value between a and b
    //z = pow(a, b); it will return a to the power of b, its like a^b
    //z = sqrt(a); it will return the square root of a, its like √a
    //z = abs(a); it will return the absolute value of a, its like |
    //z = round(a); it will return the nearest integer to a.
    //z = ceil(a); it will return the smallest integer that is greater than or equal to a.
    z = floor(a); //it will return the largest integer that is less than or equal to a.

    //the rest of the math functions can be found in the cmath library, you can check the documentation for more details.

    std::cout << z << '\n';

    return 0;
}