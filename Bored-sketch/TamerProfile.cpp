#include <iostream>
#include <windows.h>
#include <limits>

class Equipment {
    public:
    std::string equipment = "-";
    std::string sword;
    std::string accessory;
    std::string armor;
};

class Sword : public Equipment {
    public:
        void stick() {
            int Atk = 9;
            int deffense = 0;
            int spd = 5;
            int hp = 10;
        }

        void sword() {
            int Atk = 15;
            int deffense = 0;
            int spd = 3;
            int hp = 13;
        }

        void greatsword() {
          int Atk = 20;
            int deffense = 0;
            int spd = -3;
            int hp = 15;
        };

};

class Armor : public Equipment {
    public:
        void iron() {
            int Atk = 3;
            int deffense = 20;
            int spd = 0;
            int hp = 30;
        }

        void diamond() {
            int Atk = 3;
            int deffense = 30;
            int spd = 0;
            int hp = 50;
        }

        void chain() {
            int Atk = 0;
            int deffense = 10;
            int spd = 3;
            int hp = 20;
        }
};

class Accessory : public Equipment {
    public:
        void necklace() {
            int Atk = 5;
            int deffense = 7;
            int spd = 3;
            int hp = 2;
        }

        void boots() {
            int Atk = 1;
            int deffense = 9;
            int spd = 5;
            int hp = 5;
        }
        void hat() {
            int Atk = 3;
            int deffense = 6;
            int spd = 2;
            int hp = 7;
        }
};
class Pet{
    public:
        Equipment equip;
        Sword sword;
        Armor armor;
        Accessory accessory;
        int HP = 0;
        int energy = 0;
        int damage = 0;
        int speed = 0;
};

namespace {
    class Companion : public Pet {
    public:
        void Direwolf(int HP, int energy, int damage, int speed) {
            this->HP = HP;
            HP = 100;
            this->energy = energy;
            energy = 10;
            this->damage = damage;
            damage = 2;
            this->speed = speed;
            speed = 5;

            std::cout << "Species: Direwolf\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
        }

        void Griffin(int HP, int energy, int damage, int speed) {
            this->HP = HP;
            HP = 120;
            this->energy = energy;
            energy = 10;
            this->damage = damage;
            damage = 5;
            this->speed = speed;
            speed = 10;

            std::cout << "Species: Griffin\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
        }

        void Slime(int HP, int energy, int damage, int speed) {
            this->HP = HP;
            HP = 70;
            this->energy = energy;
            energy = 2;
            this->damage = damage;
            damage = 1;
            this->speed = speed;
            speed = 2;

            std::cout << "Species: Slime\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
        }
    };
}
namespace {
    class Attacker : public Pet {
    public:
        void Fenrir(int HP, int energy, int damage, int speed) {
            this->HP = HP;
            HP = 300;
            this->energy = energy;
            energy = 30;
            this->damage = damage;
            damage = 10;
            this->speed = speed;
            speed = 12;

            std::cout << "Species: Fenrir\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equip.equipment == "-") {
                std::cout << "Your beast hasn't wear any equipment yet \n";
            }
        }

        void Pheonix(int HP, int energy, int damage, int speed) {
            this->HP = HP;
            HP = 235;
            this->energy = energy;
            energy = 24;
            this->damage = damage;
            damage = 15;
            this->speed = speed;
            speed = 30;

            std::cout << "Species: Phoenix\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equip.equipment == "-") {
                std::cout << "Your beast hasn't wear any equipment yet";
            }
        }

        void MysticHound(int HP, int energy, int damage, int speed) {
            this->HP = HP;
            HP = 240;
            this->energy = energy;
            energy = 30;
            this->damage = damage;
            damage = 18;
            this->speed = speed;
            speed = 10;

            std::cout << "Species: Mystic Hound\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equip.equipment == "-") {
                std::cout << "Your beast hasn't wear any equpment yet";
            }
        }
    };
}
void loading() {
    const std::string load ="Loading....\n";
    const std::string greet = "Welcome, ";
    const std::string down = "Master\n";
    for(char c:load) {
        std::cout << c;
        Sleep(100);
    }
    for(char c:greet) {
        std::cout << c;
        Sleep(50);
    }
    for(char c:down) {
        std::cout << c;
        Sleep(300);
    }

}
void comp(std::string arr1[], int size1) {
    for(int i = 0; i < size1; i++) {
        std::cout << arr1[i] << std::endl;
    }
}
void attk(std::string arr2[], int size2) {
    for(int i = 0; i < size2; i++) {
        std::cout << arr2[i] << std::endl;
    }
}
void items() {
    std::cout << "Alright, select the items you want to wear: \n";
    std::cout << "1. Armor\n";
    std::cout << "2. Sword\n";
    std::cout << "3. Accessory\n";
}
void status();
void ch() {
    std::cout << "********************\n";
    std::cout << "what did you wanna do today?\n";
    std::cout << "1. Check current status\n";
    std::cout << "2. Check your companion\n";
    std::cout << "3. Check your summoned beast\n";
    std::cout << "4. Check inventory\n";
    std::cout << "5. Leave\n";
}
void action() {
    std::cout << "What do you want to do?" << std::endl;
    std::cout << "1. Check status" << std::endl;
    std::cout << "2. Leave\n";
}
struct tool{
    int choice = 0;
    int act;
    int choose;
    char decide = '-';
    std::string say = "-";
    bool result;
};
int main() {
    std::string companion[] = {"1. Direwolf", "2. Griffin", "3. Slime"};
    std::string attacker[] = {"1. Fenrir", "2. Phoenix", "3. Mystic hound"};
    Pet pet;
    Companion compa;
    Attacker attack;
    tool tool;
    Equipment equip;
    

    loading();
    do {
        ch();
        std::cin >> tool.choice;

    if(tool.choice == 1) {
        status();
    } else if(tool.choice == 2) {
        do {
            action();
        std::cin >> tool.act;
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                std::cout << "Please, input number between 1-2 \n";
                continue;
            }
           if(tool.act == 1) {
               while (true) {
                   std::cout << "Please select one companion, or type '4' to quit" << std::endl;
                   std::cout << "**********Companion**********\n";
                   comp(companion, 3);
                   std::cin >> tool.choose;
                   if (std::cin.fail()) {
                       std::cin.clear();
                       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                       std::cout << "Please, input number between 1-4 \n";
                       continue;
                   }
                   switch(tool.choose) {
                       case 1:
                           compa.Direwolf(pet.HP, pet.energy, pet.damage, pet.speed);
                           std::cout << "Would you like to change something?(y/n): ";
                           std::cin >> tool.decide;
                           tool.decide = tolower(tool.decide);
                           if(tool.decide == 'y') {
                               items();
                           } else if(tool.decide == 'n'){
                               tool.result = true;
                           }
                           break;
                       case 2:
                           compa.Griffin(pet.HP, pet.energy, pet.damage, pet.speed);
                           std::cout << "Would you like to change something?(y/n): ";
                           std::cin >> tool.decide;
                           tool.decide = tolower(tool.decide);
                           if(tool.decide == 'y') {
                               items();
                           } else if(tool.decide == 'n'){
                               tool.result = true;
                           } else {
                               std::cout << "Please, input y/n \n";
                           }
                           break;
                       case 3:
                           compa.Slime(pet.HP, pet.energy, pet.damage, pet.speed);
                           std::cout << "Would you like to change something?(y/n): ";
                           std::cin >> tool.decide;
                           tool.decide = tolower(tool.decide);
                           if(tool.decide == 'y') {
                               items();
                               std::cin >> tool.choose;
                               switch(tool.choose) {
                                   case 1:
                                       break;
                               }
                           } else if(tool.decide == 'n'){
                               tool.result = true;
                           }
                           break;
                       case 4:
                           tool.result = true;
                           break;
                       default:
                           std::cout << "You hasn't tame that species yet\n";
                           continue;
                   }
                   if (tool.result == true) {
                       break;
                   }
               }
           }
            if (tool.result == true) {
                break;
            }
        }while (tool.act != 1 && tool.act != 2);
    } else if(tool.choice == 3) {
        std::cout << "**********Summoned Beast**********\n";
        attk(attacker, 3);
        std::cin >> tool.choose;
        switch(tool.choose) {
            case 1:
                attack.Fenrir(pet.HP, pet.energy, pet.damage, pet.speed);
                break;
            case 2:
                attack.Pheonix(pet.HP, pet.energy, pet.damage, pet.speed);
                break;
            case 3:
                attack.MysticHound(pet.HP, pet.energy, pet.damage, pet.speed);
                break;
            default:
                    std::cout << "You hasn't tame that species yet\n";
                    break;
        }
    }
    }while(tool.choice != 5);
    return 0;
}

void status() {
    std::cout << "**********Status**********\n";
    std::cout << "Name: Adrian Vance\n";
    std::cout << "Age: 19\n";
    std::cout << "Sex: Male\n";
    std::cout << "Affiliation: Ignis Caleum Guild\n";
    std::cout << "Class: Tamer\n";
}