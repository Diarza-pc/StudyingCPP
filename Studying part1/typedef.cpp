#include <iostream>

using namespace std;

int main() {
    //typedef is a keyword in C++ that allows you to create an alias for an existing data type. It can be used to simplify complex type declarations, improve code readability, and make it easier to change the underlying type in the future if needed.
    //for example;
    typedef std::string str; //this means that you can use 'str' instead of 'std::string' in your code.
    typedef float koma;
    typedef char satu;
    //or we can use 'using' keyword instead of 'typedef' to achieve the same result;
    using cc = char; //this means that you can use 'cc' instead of 'char' in your code.
    using dd = double;
    using st = std::string;

    str name = "Jane";
    koma price = 19.99;
    satu letter = 'A';

    st name2 = "John";
    dd price2 = 25.77;
    cc letter2 = 'B';


    cout << "Hello, " << name << "!" << '\n'; //as you can see, we used 'str' instead of 'std::string' to declare the variable 'name'.
    cout << "The price is: " << price << '\n'; //as you can see, we used 'koma' instead of 'float' to declare the variable 'price'.
    cout << "The letter is: " << letter << '\n'; 
    cout << "Hello, " << name2 << "!" << '\n'; 
    cout << "The price is: " << price2 << '\n'; 
    cout << "The letter is: " << letter2 << '\n';
    return 0;
}