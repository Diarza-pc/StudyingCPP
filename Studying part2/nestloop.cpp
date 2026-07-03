#include <iostream>

int main() {
    std::string name;
    std::cout << "Welcome to the brute force way" << std::endl;

    while(name.empty()) {
        std::cout << "Please, enter your name" << std::endl;
        std::getline(std::cin, name);
    }

    std::cout << "alright, shall we begin?" << std::endl;
    std::cout << "there are 3 combination of number, and it contain a password among them" << std::endl;
    std::cout << "Let's try brute force it" << std::endl;

    
    for(char i = 'A'; i <= 'z'; i++) {
        for(char j = 'A'; j <= 'Z'; j++) {  
           for(char k = 'A'; k <= 'Z'; k++) {
            std::cout << i << j << k << std::endl;
            if(i == 'P' && j == 'A' && k == 'I') {
                return 0;
           }
        } 
    }
}
    return 0;
}