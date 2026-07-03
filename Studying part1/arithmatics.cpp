#include <iostream>

int main() {
    //aritmethic operator contain addition, subtraction, multiplication, division and modulus, and there are some way to write the code.

    //aritmetic, addition
    int a = 12;
    int b = 4;
    int sum = a + b;
    //or if want add more number but just in one variable:
    //sum = sum + 5;
    //sum += 5;
    //sum++; it same like sum + 1.

    //aritmetic, subtraction
    int sub = a - b;
    //or if want subtract more number but just in one variable:
    //sub = sub - 5;
    //sub -= 5; 
    //sub--; it same like sub - 1.

    //aritmetic, multiplication
    int mul = a * b;
    //or if want multiply more number but just in one variable:
    //mul = mul * 5;
    //mul *= 5;

    //aritmetic, division
    int div = a / b;
    //or if want divide more number but just in one variable:
    //div = div / 5;
    //div /= 5;

    //what if we want to divided 5 by 2? The answer is 2.5 but the output is 2, BECAUSE WE UsE INT. Use double/float instead.
    double students = 79;
    students = students / 73;

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The subtraction is: " << sub << std::endl;
    std::cout << "The multiplication is: " << mul << std::endl;
    std::cout << "The division is: " << div << std::endl;
    std::cout << "The number of students is: " << students << std::endl;

    //aritmetic, modulus, it will give the remainder of the division.
    //its useful when we want to check if a number is even or odd.
    int villages = 847824;
    int remain = villages % 97;
    std::cout << "The remain is: " << remain << std::endl;

    //There are rule of precedence in aritmethic operator, PEMDAS, Parentheses, Exponents, Multiplication and Division, Addition and Subtraction. So if we want to change the order of the operation, we can use parentheses.
    int result = (a + b) * villages/students;
    std::cout << "The result is: " << result << std::endl;

    return 0;
}