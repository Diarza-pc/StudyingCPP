#include <iostream>

int main() {

    /*Fill = fills a range with specific value
            (begin, end, value)*/

    const int size = 150;
    std::string numb[size];

    fill(numb, numb + (size / 3), "One");
    fill(numb + (size / 3), numb + (size / 5)*2, "Two");
    fill(numb + (size / 5)*2, numb + size, "three");

    for(std::string number : numb) {
        std::cout << number << '\n';
    }


    return 0;
}