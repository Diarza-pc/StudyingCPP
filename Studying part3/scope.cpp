#include <iostream>

std::string favfood = "pizza";//its risky to write global variable cause can pollute global function

void food();

int main() {
    //local variable = declared inside a function or block {}
    //global variable = declared oitside all function
    //there's one unique condition, local variable can read global variable, but global variable can't read local variable
    std::string favfood = "burger";
    std::cout << favfood << std::endl;
    std::cout << ::favfood << std::endl; //it read local scope first then global. but if want to immediately read global, use ::
    food();
    return 0;
}

void food(){
    std::string favfood = "salad";
    std::cout << favfood;
}