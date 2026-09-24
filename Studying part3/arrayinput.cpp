#include <iostream>
#include <cctype>
#include <algorithm>
#include <vector>
struct C{
    std::string input;
    std::string name[10];
    std::vector<int> Class{};
    std::vector<std::string> major{};
    int size = sizeof(name) / sizeof(name[0]);
};
int main() {
    C cc;

    for(int i = 0; i < cc.size; i++){
        std::cout << "Input your friends name you remember (press q to exit) #" << i + 1 << ": ";
        std::getline(std::cin, cc.input);
        if (cc.input == "q") {
            break;
        } 
        cc.name[i] = cc.input;
    }
    while(true) {
        std::cout << "What major did you have on your campus, the one you know(press 'q' to exit): ";
        std::cin >> cc.input;
        std::transform(cc.input.begin(), cc.input.end(), cc.input.begin(), ::toupper);

        if(cc.input == "Q") {
            break;
        }

        cc.major.push_back(cc.input);
    }

    std::cout << "Name that have known: " << '\n';

    for(int i = 0; !cc.name[i].empty(); i++){
        std::cout << i + 1 << ". "<< cc.name[i] << '\n';
    }
    for(size_t i = 0; i < cc.major.size(); i++) {
        std::cout << i + 1 << ". "<< cc.major[i] << '\n';
    }


    return 0;
}