#include <iostream>

class food{
    public:
        std::string type;
        std::string country;
        std::string name;
        int much;

        food(std::string type, std::string country){
            this->type = type;
            this->country = country;
            std::cout << type << " is from " << country << std::endl;
        }

        food(std::string name, int much){
            this->name = name;
            this->much = much;
            std::cout << name << " cook " << much << " portion";
        }
};

int main() {
    /*constructor = Special methode that used to set up and
     initialize object state and data (both from public or private) when the object got created*/
    food food1("Rendang", "Indonesia");
    food food2("Dedy", 2);
    
    return 0;
}