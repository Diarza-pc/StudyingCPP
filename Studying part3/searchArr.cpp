#include <iostream>

int Search(std::string array[], int size, std::string element);

int main() {

    std::string name[] = {"Galih", "Rizki", "Raffa", "Farhan", "Aditya"};
    int size = sizeof(name) / sizeof(name[0]);
    int index;
    std::string getName;
    

    std::cout << "Enter name you want to know: " << '\n';
    std::getline(std::cin, getName);

    index = Search(name, size, getName);

    if(index != -1) {
        std::cout << getName << " is in queue " << index;
    }else{
        std::cout << "There was such a name like that here";
    }


    return 0;
}

int Search(std::string array[], int size, std::string element) {
    for(int i = 0; i < size; i++) {
        if(array[i] == element) {
            std::cout << i;
            return i;
        }
    }
    return -1;
}