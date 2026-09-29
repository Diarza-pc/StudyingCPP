#include <iostream>
class Pet{
    public:
        std::string name;
        int age;
    virtual void own() {
        std::cout << "This pet already have owner!\n";
    }
};
class Cat : public Pet{
    public:
        std::string behavior;

    void own() override {
        std::cout << "This Cat already have owner!";
    }

    void Meow(std::string name, int age, std::string behavior) {
        this->name = name;
        this->age = age;
        this->behavior = behavior;
        std::cout << "This cat have a name, it was " << name << ", and already " << age << " old\n";
        std::cout << "This cat have unique behavior too, it likes to " << behavior << '\n';
    }
};
int main() {
    Pet* pets[1];
    Pet pet;
    Cat cat;

    pets[0] = new Pet;
    pets[1] = new Cat;

    pets[0]->own();
    pets[1]->own();
    cat.Meow("Guila", 2, "Sleeping");

    return 0;
}