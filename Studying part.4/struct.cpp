#include <iostream>
struct panda{
    std::string species;
    int age;
    std::string habitat;
};

int main() {

    panda panda1, panda2;

    panda1.species = "Giant panda";
    panda1.age = 17;
    panda1.habitat = "Minshan, Qionglai, Liangshan, Daxiangling, Xiaoxiangling mountain";

    panda2.species = "Red panda";
    panda2.age = 9;
    panda2.habitat = "Himalayas and western China";

    std::cout << panda1.species << " / " << panda1.age << " / " << panda1.habitat << std::endl;
    std::cout << panda2.species << " / " << panda2.age << " / " << panda2.habitat << std::endl;

    return 0;
}