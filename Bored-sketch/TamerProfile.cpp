#include <iostream>
#include <windows.h>
#include <limits>

class Equipment {
    public:
    std::string equipment = "-";
    std::string sword;
    std::string accessory;
    std::string armor;
    int Atk;
    int energy;
    int spd;
    int hp;
};

class Sword : public Equipment {
    public:
        void stick() {
            Atk = 9;
            energy = 0;
            spd = 5;
            hp = 10;
        }

        void sword() {
            Atk = 15;
            energy = 0;
            spd = 3;
            hp = 13;
        }

        void greatsword() {
          Atk = 20;
            energy = 0;
            spd = -3;
            hp = 15;
        };

};

class Armor : public Equipment {
    public:
        void iron() {
            Atk = 3;
            energy = 20;
            spd = 0;
            hp = 30;
        }

        void diamond() {
            Atk = 3;
            energy = 30;
            spd = 0;
            hp = 50;
        }

        void chain() {
            Atk = 0;
            energy = 10;
            spd = 3;
            hp = 20;
        }
};

class Accessory : public Equipment {
    public:
        void necklace() {
            Atk = 5;
            energy = 7;
            spd = 3;
            hp = 2;
        }

        void boots() {
            Atk = 1;
            energy = 9;
            spd = 5;
            hp = 5;
        }
        void hat() {
            Atk = 3;
            energy = 6;
            spd = 2;
            hp = 7;
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
        void Direwolf() {
            HP = 120;
            energy = 12;
            damage = 10;
            speed = 12;

            std::cout << "Species: Direwolf\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
        }

        void Griffin() {
            HP = 100;
            energy = 10;
            damage = 15;
            speed = 17;

            std::cout << "Species: Griffin\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
        }

        void Slime() {
            HP = 70;
            energy = 5;
            damage = 7;
            speed = 5;

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
        void Fenrir() {
            HP = 200;
            energy = 25;
            damage = 20;
            speed = 21;

            std::cout << "Species: Fenrir\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equip.equipment == "-") {
                std::cout << "Your beast hasn't wear any equipment yet \n";
            }
        }

        void Phoenix() {
            HP = 190;
            energy = 30;
            damage = 19;
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

        void MysticHound() {
            HP = 195;
            energy = 25;
            damage = 17;
            speed = 22;

            std::cout << "Species: Mystic Hound\n";
            std::cout << "HP: " << HP << '\n';
            std::cout << "Energy: " << energy << '\n';
            std::cout << "Damage: " << damage << '\n';
            std::cout << "Speed: " << speed << '\n';
            if(equip.equipment == "-") {
                std::cout << "Your beast hasn't wear any equipment yet";
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
void weap(std::string arr3[], int size3) {
    for(int i = 0; i < size3; i++) {
        std::cout << arr3[i] << '\n';
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
    int choice = 0;
    int act;
    int choose;
    char decide = '-';
    std::string say = "-";
    bool result;
};
class companionStat{
    public:
        Companion statComp;
        Sword statSword;

    void slimeStat1() {
        statComp.Slime();
        statSword.stick();

        std::cout << "Species: Slime\n";
        std::cout << "HP: " << statComp.HP + statSword.hp << '\n';
        std::cout << "Energy: " << statComp.energy + statSword.energy << '\n';
        std::cout << "Damage: " << statComp.damage + statSword.Atk << '\n';
        std::cout << "Speed: " << statComp.speed + statSword.spd << '\n';
    }
    void slimeStat2() {
        statComp.Slime();
        statSword.sword();

        std::cout << "Species: Slime\n";
        std::cout << "HP: " << statComp.HP + statSword.hp << '\n';
        std::cout << "Energy: " << statComp.energy + statSword.energy << '\n';
        std::cout << "Damage: " << statComp.damage + statSword.Atk << '\n';
        std::cout << "Speed: " << statComp.speed + statSword.spd << '\n';
    }
    void slimeStat3() {
        statComp.Slime();
        statSword.greatsword();

        std::cout << "Species: Slime\n";
        std::cout << "HP: " << statComp.HP + statSword.hp << '\n';
        std::cout << "Energy: " << statComp.energy + statSword.energy << '\n';
        std::cout << "Damage: " << statComp.damage + statSword.Atk << '\n';
        std::cout << "Speed: " << statComp.speed + statSword.spd << '\n';
    }
};
int main() {
    std::string companion[] = {"1. Direwolf", "2. Griffin", "3. Slime"};
    std::string attacker[] = {"1. Fenrir", "2. Phoenix", "3. Mystic hound"};
    std::string weapon[] = {"stick", "sword", "greatsword"};
    Pet pet;
    Companion compa;
    Attacker attack;
    tool tool;
    Equipment equip;
    companionStat stats;
    

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
                           compa.Direwolf();
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
                           compa.Griffin();
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
                           compa.Slime();
                           std::cout << "Would you like to change something?(y/n): ";
                           std::cin >> tool.decide;
                           tool.decide = tolower(tool.decide);
                           if(tool.decide == 'y') {
                               items();
                               std::cin >> tool.choose;
                               switch(tool.choose) {
                                   case 1:
                                       weap(weapon, 3);
                                       std::cout << "pick one weapon to wear: ";
                                       std::cin >> tool.choice;
                                       if (std::cin.fail()) {
                                           std::cin.clear();
                                           std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                                           std::cout << "Please, input number between 1-3 \n";
                                           continue;
                                       }

                                       if(tool.choice == 1) {
                                           std::string text = "Loading..\n";
                                           for (char c : text) {
                                               Sleep(100);
                                               std::cout << c;
                                           }
                                           stats.slimeStat1();
                                       } else if (tool.choice == 2) {
                                           std::string text = "Loading..\n";
                                           for (char c : text) {
                                               Sleep(100);
                                               std::cout << c;
                                           }
                                           stats.slimeStat2();
                                       } else if (tool.choice == 3) {
                                           std::string text = "Loading..\n";
                                           for (char c : text) {
                                               Sleep(100);
                                               std::cout << c;
                                           }
                                           stats.slimeStat3();
                                       }
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
                attack.Fenrir();
                break;
            case 2:
                attack.Phoenix();
                break;
            case 3:
                attack.MysticHound();
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