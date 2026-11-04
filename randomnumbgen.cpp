#include <iostream>
#include <ctime> //contain time(), time_t, and so on.
#include <cstdlib>//contain rand(), srand(), and so on.

int main() {
    //Pseudo-random = Not truly random, just close. it mean.. it can got determinate from it seed.
    time_t Varvar;
    time(&Varvar);
    srand(Varvar); //It have same concept with srand(time(NULL)), the difference is just... time_t is for saving the time value to use it again in the future.

    srand(time(NULL)); //it was seed, like time in there. it have million chance to appear cause the range was total seconds from 1 January 1970 to now.

    int numA = rand(); //it have limitation, the range is 0-32767.
    int numB = rand() % 999; //it will generate range between 0-998, the remain.
    int numC = rand() % 435 + 1; //instead 0-434, it will move the range so the result will be 1-435. it have same concept if use 2 or 3 and so on.

    std::cout << numA << std::endl;
    std::cout << numB << std::endl; 
    std::cout << numC << std::endl;

    std::cout << "Dice example" << std::endl;

    std::string Dice1;
    std::string Dice2;
    std::string Dice3;

    std::cout << "What dice you want to roll for first dice (Polyhedral/Standar?): " << std::endl;
    std::cin >> Dice1;
    if(Dice1 == "Polyhedral" || Dice1 == "polyhedral" || Dice1 == "POLYHEDRAL" || Dice1 == "Poly" || Dice1 == "poly" || Dice1 == "POLY") {
        std::cout << "You choose polyhedral, here the number:" << std::endl;
        int poly1 = rand() % 20 + 1;
        std::cout << poly1 << std::endl;
    } else if (Dice1 == "Standar" || Dice1 == "standar" || Dice1 == "STANDAR" || Dice1 == "Stand" || Dice1 == "stand" || Dice1 == "STAND" || Dice1 == "stan" || Dice1 == "Stan" || Dice1 == "STAN") {
        std::cout << "You choose standar, here your number:" << std::endl;
        int stan1 = rand() % 6 + 1;
        std::cout << stan1 << std::endl;
    }

    std::cout << "What dice you want to roll for second dice (Polyhedral/Standar?): " << std::endl;
    std::cin >> Dice2;
    if(Dice2 == "Polyhedral" || Dice2 == "polyhedral" || Dice2 == "POLYHEDRAL" || Dice2 == "Poly" || Dice2 == "poly" || Dice2 == "POLY") {
        std::cout << "You choose polyhedral, here the number:" << std::endl;
        int poly2 = rand() % 20 + 1;
        std::cout << poly2 << std::endl;
    } else if (Dice2 == "Standar" || Dice2 == "standar" || Dice2 == "STANDAR" || Dice2 == "Stand" || Dice2 == "stand" || Dice2 == "STAND" || Dice2 == "stan" || Dice2 == "Stan" || Dice2 == "STAN") {
        std::cout << "You choose standar, here your number:" << std::endl;
        int stan2 = rand() % 6 + 1;
        std::cout << stan2 << std::endl;
    }

std::cout << "What dice you want to roll for third dice (Polyhedral/Standar?): " << std::endl;
    std::cin >> Dice3;
    if(Dice3 == "Polyhedral" || Dice3 == "polyhedral" || Dice3 == "POLYHEDRAL" || Dice3 == "Poly" || Dice3 == "poly" || Dice3 == "POLY") {
        std::cout << "You choose polyhedral, here the number:" << std::endl;
        int poly3 = rand() % 20 + 1;
        std::cout << poly3 << std::endl;
    } else if (Dice3 == "Standar" || Dice3 == "standar" || Dice3 == "STANDAR" || Dice3 == "Stand" || Dice3 == "stand" || Dice3 == "STAND" || Dice3 == "stan" || Dice3 == "Stan" || Dice3 == "STAN") {
        std::cout << "You choose standar, here your number:" << std::endl;
        int stan3 = rand() % 6 + 1;
        std::cout << stan3 << std::endl;
    }


    return 0;
}