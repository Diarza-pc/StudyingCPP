#include <iostream>
enum HouseNum {
    house1 = 50423,
    house2 = 34535,
    house3 = 21425,
    house4 = 35966,
    house5 = 33223
};
struct Resident{
    std::string name;
    HouseNum house;
    std::string streetName;
    std::string city;
};

int main() {
    //enums = user-defined data type that consist named constant integer value.
    std::string name;
    Resident res[] = {{"Adam", house1, "Maple Street", "Beverly Hills"},
                        {"Kate", house2, "Oak Avenue", "Beverly Hills"},
                        {"Lian", house3, "Pine Road", "Beverly Hills"}, 
                        {"Rin", house4, "Elm Drive", "Beverly Hills"}, 
                        {"Herry", house5, "Cedar lane", "Beverly Hills"}, 
                        {"Aryan", house1, "Maple Street", "Beverly Hills"}};

    while(true) {
    std::cout << "Whose house did ya looking?: ";
    std::cin >> name;
    bool found = false;
    for(const auto& r : res) {
        if(r.name == name) {
            std::cout << name  << "'s live in " << r.house << ", " << r.streetName << ", " << r.city;
            found = true;
            break;
        }
    }
    if(found == true) {
        break;
    }
    if(!found) {
        std::cout << "I haven't heard of this person to be honest, have other name in mind?";
    }
}
    return 0;
}