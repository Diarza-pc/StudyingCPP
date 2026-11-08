#include <iostream>
#include <ctime>
#include <windows.h>

int main(){
    srand(time(0));
    

    std::cout << "What did you wanna do today (Pick a number)?" << std::endl;
    std::cout << "1. Take a walk?" << std::endl;
    std::cout << "2. Breakfast?" << std::endl;
    std::cout << "3. Reading?" << std::endl;

    std::string input;
    std::cin >> input;

    if(input == "1") {
        std::cout << "I see, lets just see the weather condition first alright? " << std::endl;
        std::cout << "......." << std::endl;
        int weat = rand() % 2 + 1;
        Sleep(3000);
        switch(weat) {
            case 1:
               std::cout << "Oh, its kinda windy today, but it still a nice weather for take a walk for a moment" << std::endl;
               break;
            case 2: 
               std::cout << "It sunny outside, lets take a long path to walk!!" << '\n';
               break;
            case 3:
               std::cout << "Sheesh, next time i guess? rain will come soon" << std::endl;
               break;
        }
    }

    if(input == "2") {
        std::cout << "Mmmm... yeah, breakfast today is: " << std::endl;
        int nummy = rand() % 2 + 1;
        switch(nummy) {
            case 1:
               std::cout << "Wheat Bread" << std::endl;
               break;
            case 2: 
               std::cout << "Sandwiches" << '\n';
               break;
            case 3:
               std::cout << "French toast casserole" << std::endl;
               break;
        }
    }

    if(input == "3") {
        std::cout << "Oh!, wait, i have some book, you might be like it " << std::endl;
        std::cout << "Give me some minutes to take them" << std::endl;
        int read = rand() % 2 + 1;
        Sleep(4000);
        switch(read) {
            case 1:
               std::cout << "I have Shadow and Bone trilogy here, it's one of my favorite!!" << std::endl;
               std::cout << "You into fantasy theme didnt ya?" << std::endl;
               break;
            case 2: 
               std::cout << "Solo Leveling novel is good one you know? it already have manhwa!!" << '\n';
               std::cout << "Are you already try it?" << std::endl;
               break;
            case 3:
               std::cout << "A Tale of Two Cities.... i like this because its brotherhood" << std::endl;
               std::cout << "Didn't you really like brotherhood theme?" << std::endl;
               break;
        }
    }
    return 0;
}