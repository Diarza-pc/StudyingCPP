#include <iostream>

int main() {
    double score;

    std::cout << "How much score did you get? " << '\n';
    std::cin >> score;

    if (score == 100) {
        std::cout << "Congrats!!!! Perfect score!" << '\n';
    } else if (score < 100 && score >= 90) {
        std::cout << "Congrats! You got an A!" << '\n';
    } else if (score < 90 && score >= 80) {
        std::cout << "Congrats! You got a B!" << '\n';
    } else if (score < 80 && score >= 70) {
        std::cout << "Congrats! You got a C!" << '\n';
    } else if (score < 70 && score >= 60) {
        std::cout << "Congrats! You got a D!" << '\n';
    } else {
        std::cout << "Sorry, you failed the exam." << '\n';
    }
    return 0;
}