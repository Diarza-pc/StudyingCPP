#include <iostream>

int main() {
    //for loop = will execute block of code for some amount of time.
    //for loop has 3 statement we CAN add = First was create index, Second was stopping condition, Third is where we can increase or decrease the counter.

    std::cout << "There are 10 seconds left before new year, and i want to say something to you..." << std::endl;

    for (int i = 10; i >= 0; i--) {
        std::cout << i << std::endl;
    }

    std::cout << "I Love You" << std::endl;

    return 0;
}