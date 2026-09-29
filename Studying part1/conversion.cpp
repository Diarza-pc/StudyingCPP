#include <iostream>

int main() {
    //conversion is a way to convert one data type to another data type.
    //there are two types of conversion, implicit and explicit conversion.

    //implicit conversion, is a type of conversion that is done automatically by the compiler.
    //for example:
    int a  = 3.74; //the compiler will convert 3.74 to 3, because int can only store whole numbers.
    std::cout << "The value of a is: " << a << std::endl; //the output will be 3.
    //another example:
    double b = (int) 3.14159; //this was explicit conversion, because we use (int) to convert 3.14159 to 3.
    std::cout << "The value of b is: " << b << std::endl; //the output will be 3 because we use int.
    //another example:
    char word = 99; //the compiler will convert 99 to 'c', because char can store characters (ASCII value).
    std::cout << "The value of word is: " << word << std::endl; //the output will be 'c'.
    std::cout << "The ASCII value of '100' is: " << (char) 100 << std::endl; //the output will be d.

    //what if there was condition that need use to fuse total score of an exams?
    int correct = 79;
    int questions = 150;
    double score = correct/questions * 100;
    //std::cout << "The score is: " << score << std::endl;//the output will be zero because we use int, instead, make one of variables to double.
    score = (double) correct/questions * 100; //this is explicit conversion, because we use (double) to convert correct to double.
    std::cout << "The score is: " << score << "%" << std::endl;

    return 0;
}