#include <iostream>
#include <windows.h>

void suggestion(), confirmation(), call(std::string name);
void call(std::string name);
void encourage() {
    std::string teks = "Go, chase your dream, don't look back, and keep  moving forward\n";
    for (char c:teks) {
        std::cout << c << std::flush;
        Sleep(100);
    }
}

int main () {
    //function = reuseable block code, like its name, it can be used many time as much as we want. it's use "void".
    std::string name;
    name = "Mate";
    encourage();
    suggestion();
    confirmation();
    call(name);

    return 0;
}

void suggestion() {
    std::string say = "Don't listen to anyone\n";
    for(char c:say) {
        std::cout << c << std::flush;
        Sleep(100);
    }
}
void confirmation() {
    std::string con = "promise me okay....?\n";
    for(char c:con) {
        std::cout << c << std::flush;
        Sleep(50);
    }
}
void call(std::string name) {
    std::cout << name << "?" << std::endl;
}