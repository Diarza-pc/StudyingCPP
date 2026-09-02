#include <iostream>

struct profile{
    std::string nations;
    double temperature;
    std::string place;
    std::string conditions;
    std::string alcoholic;
    std::string gender;
    std::string clothesType;
};
void preCondition(profile prof);
void Place(std::string place[], int total, std::string find);
void sweatIntensity(profile* prof);

int main() {
    profile prof;
    std::string place[] {"Angel's share", "Dawn winery", "Cat's tail", "The flagship"};
    int total;


    preCondition(prof);
    return 0;
}
void preCondition(profile prof){
    std::cout << "Which nations are you in?: ";
    std::getline(std::cin, prof.nations);
    std::cout << '\n';
    std::cout << "What average temperature in there?: ";
    std::cin >> prof.temperature;
    std::cout << '\n';
    std::cout << "Where exactly place did you pick in that nations?: ";
    std::cin >> prof.place;
    std::cout << '\n';
    std::cout << "how about your condition while sweating?: ";
    std::cin >> prof.conditions;
    std::cout << '\n';
    std::cout << "Did this person have strong addict to alcohol?: ";
    std::cin >> prof.alcoholic;
    std::cout << '\n';
    std::cout << "sex?: ";
    std::cin >> prof.gender;
    std::cout << '\n';
    std::cout << "What kind of material that in this person clothes?: ";
    std::cin >> prof.clothesType;
    std::cout << '\n';
}
void Place(std::string place[], int total, std::string find){
    while(true) {
    std::cout << "Where does this person usually drink alcohol?: ";
    std::getline(std::cin, find);
    for(int i = 0; i < 4; i++) {
        if(find == place[i]) {
            std::cout << "I see";
            break;
        } else {
            std::cout << "I haven't heard of that place\n";
        }
    }
    }
}
void sweatIntensity(profile* prof){

}