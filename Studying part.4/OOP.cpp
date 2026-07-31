#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

        void sleep() {
            std::cout << "This person currently sleeping\n";
        }
        void study() {
            std::cout << "This person is currently study\n";
        }
};

int main() {
    /*OOP or Object Oriented Programming = A paradigm that use class as it blueprint or start point,
                                            and this class consist a Attribute(compounents, like cars, phone, etc)
                                            and Methode(action that this thing can do).*/
    Human human;
    human.name = "Rill";
    human.occupation = "Student";
    human.age = 19;

    std::cout << "Name: " << human.name << '\n';
    std::cout << "Status: " << human.occupation << '\n';
    std::cout << "Age: " << human.age << '\n';
    return 0;
}