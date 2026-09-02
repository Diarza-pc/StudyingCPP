#include <iostream>
#include <windows.h>
#include <limits>

class Pet{
    public:
        int HP;
        int energy;
        int damage;
        int speed;
        std::string equipment;
};

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
class Attacker : public Pet {
    public:
        void Fenrir(int HP, int energy, int damage, int speed, std::string equipment) {
            this->HP = HP;
            HP = 300;
            this->energy = energy;
            energy = 30;
            this->damage = damage;
            damage = 10;
            this->speed = speed;
            speed = 12;
            this->equipment = equipment;
            equipment = "-";

            std::cout << "Species: Fenrir\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equipment == "-") {
                std::cout << "Your beast hasn't wear any equpment yet";
            }
        }

        void Pheonix(int HP, int energy, int damage, int speed, std::string equipment) {
            this->HP = HP;
            HP = 235;
            this->energy = energy;
            energy = 24;
            this->damage = damage;
            damage = 15;
            this->speed = speed;
            speed = 30;
            this->equipment = equipment;
            equipment = "-";

            std::cout << "Species: Pheonix\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equipment == "-") {
                std::cout << "Your beast hasn't wear any equpment yet";
            }
        }

        void MysticHound(int HP, int energy, int damage, int speed, std::string equipment) {
            this->HP = HP;
            HP = 240;
            this->energy = energy;
            energy = 30;
            this->damage = damage;
            damage = 18;
            this->speed = speed;
            speed = 10;
            this->equipment = equipment;
            equipment = "-";

            std::cout << "Species: Mystic Hound\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equipment == "-") {
                std::cout << "Your beast hasn't wear any equpment yet";
            }
        }
};
void loading() {
    std::string load ="Loading....\n";
    std::string greet = "Welcome, ";
    std::string down = "Master\n";
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
    int choice;
    int act;
    int choose;
    char decide;
    std::string say;
};
int main() {
    std::string companion[] = {"1. Direwolf", "2. Griffin", "3. Slime"};
    std::string attacker[] = {"1. Fenrir", "2. Pheonix", "3. Mystic hound"};
    Pet pet;
    Companion compa;
    Attacker attack;
    tool tool;
    

    loading();
    do {
        Sleep(1000);
        system("cls");
        ch();
        std::cin >> tool.choice;
    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if(tool.choice == 1) {
        status();
    } else if(tool.choice == 2) {
        action();
        std::cin >> tool.act;
           if(tool.act == 1) {
            system("cls");
            std::cout << "**********Companion**********\n";
            comp(companion, 3);
            std::cout << "Please select one companion, or type '4' to quit" << std::endl;
            std::cin >> tool.choose;
            switch(tool.choose) {
                case 1: 
                    while(true){
                    compa.Direwolf(pet.HP, pet.energy, pet.damage, pet.speed);
                    std::cout << "Would you like to change something?(y/n): ";
                    std::cin >> tool.decide;
                    tool.decide = tolower(tool.decide);
                    if(tool.decide == 'y') {
                        std::cout<< "ok/n";
                    } else if(tool.decide == 'n'){
                        break;
                    }
                }
                case 2:
                    compa.Griffin(pet.HP, pet.energy, pet.damage, pet.speed);
                case 3:
                    compa.Slime(pet.HP, pet.energy, pet.damage, pet.speed);
                default:
                    std::cout << "You hasn't tame that species yet\n";
                    break;
            }
           }
        
    } else if(tool.choice == 3) {
        std::cout << "**********Summoned Beast**********\n";
        attk(attacker, 3);
        std::cin >> tool.choose;
        switch(tool.choose) {
            case 1:
                attack.Fenrir(pet.HP, pet.energy, pet.damage, pet.speed, pet.equipment);
                break;
            case 2:
                attack.Pheonix(pet.HP, pet.energy, pet.damage, pet.speed, pet.equipment);
                break;
            case 3:
                attack.MysticHound(pet.HP, pet.energy, pet.damage, pet.speed, pet.equipment);
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