#include <iostream>

int main() {
    //there are some method in string, like:
    //1. name.length() = it give limitation about how much character you can input on system
    //2. name.empty() = checking are user already input/write something on system or still empty/haven't write it yet
    //3. name.clear() = it cleared user input
    //4. name.append() = inside the parenthesis, we could add another string in the end of output.
    //5. name.at() = we can display one character from the string, the index of string begin with 0, so if we write index 0 in parenthesis, the output will be the first word from the string
    //6. name.insert() = we insert character to a given position on our string.
    //7. name.find() = to know where exactly character location in string with index.
    //8. name.erase() = to erase portion of string.
    //Note : There are more in c++.com website

    //example
    std::string name;
    std::cout << "Enter your own name: " << std::endl;
    std::getline(std::cin, name);
    if (name.length() >= 15) {
        std::cout << "Your name can't excess 14 character" << std::endl;
    } else {
        std::cout << "Hello " << name << std::endl;
    }

    std::string food;
    std::cout << "what your favorite food?" << std::endl;
    std::getline (std::cin, food);
    if (food.empty()) {
        std::cout << "You haven't tell me yet..." << name << std::endl;
    } else {
        std::cout << food << "? " << "I see, currently my fav is cheese burger" << std::endl;
    }

    std::string drink;
    std::cout << "What about your favorite drink? " << std::endl;
    std::getline(std::cin, drink);

    drink.clear();

    std::string cond;
    std::cout << "How was your feeling now? " << std::endl;
    std::getline(std::cin, cond);

    cond.append("? I understand");
    std::cout << cond << std::endl;

    std::string fr;
    std::cout << "Did you have close friend by any chance? " << std::endl;
    std::getline(std::cin, fr);

    std::cout << fr.at(3);

    std::string hw;
    std::cout << "Did you have homework today?" << std::endl;
    std::getline(std::cin, hw);

    hw.insert(0, "Errr....");
    std::cout << hw << std::endl;

    std::string br;
    std::cout << "Do you have brother or sister by any chance?" << std::endl;
    std::getline(std::cin, br);

    std::cout << br.find('e') << std::endl;

    std::string sc;
    std::cout << "mind tell me about your school" << std::endl;
    std::getline(std::cin, sc);

    std::cout << sc.erase(0, 4) << std::endl;

    return 0;
}