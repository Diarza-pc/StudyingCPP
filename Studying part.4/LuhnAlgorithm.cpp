#include <iostream>

int Digit(int number);
int OddNumb(std::string card);
int EvenNUmb(std::string card);

int main(){

    std::string card;
    int result = 0;

    std::cout << "Enter card numb: ";
    std::cin >> card;

    result = EvenNUmb(card) + OddNumb(card);

    if (result % 10 == 0) {
        std::cout << "your card is valid\n";
    } else {
        std::cout << "your card is invalid\n";
    }

    return 0;
}

int Digit(const int number) {
    return number % 10 + (number / 10 % 10);
}
int OddNumb(const std::string card) {
    int sum = 0;

    for(int i = card.size() - 1; i >= 0; i -= 2) {
        sum += card[i] - 48;
    }
    return sum;
}
int EvenNUmb(const std::string card) {
    int sum = 0;

    for(int i = card.size() - 2; i >= 0; i -= 2) {
        sum += Digit((card[i] - 48) * 2);
    }
    return sum;
}