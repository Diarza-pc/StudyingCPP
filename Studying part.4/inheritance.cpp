#include <iostream>
class Furniture{
    public:
        std::string shape;
        std::string color;
    void bought() {
        std::cout << "I just bought this furniture yesterday\n";
    }
};
class Sofa : public Furniture{
    public:
        void sofaShape(std::string shape){
            this-> shape = shape;
            std::cout << "my sofa shape was " << shape << '\n';
        }

};

int main() {
    Sofa sofa;
    Furniture furniture;
    sofa.sofaShape("Asymmetrical");
    furniture.bought();
    return 0;
}