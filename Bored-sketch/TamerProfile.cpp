#include <iostream>
#include <windows.h>
#include <limits>

namespace {
class Equipment {
    public:
    std::string equipment = "-";
    double Atk = 0;
    double energy = 0;
    double spd = 0;
    double hp = 0;

    void equipA() {
        std::string Arm[3] = {"1. Chain", "2. Iron", "3. Diamond"};
        for (int i = 0; i < 3; i++) {
            std::cout << Arm[i] << '\n';
        }
    }
    void equipB() {
        std::string Acc[3] = {"1. Necklace", "2. Boots", "3. Hat"};
        for (int i = 0; i < 3; i++) {
            std::cout << Acc[i] << '\n';
        }
    }
};
}

namespace {
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
}

namespace {
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
}

namespace {
    class Accessory : public Equipment {
    public:
        void necklace() {
            Atk = 0.15;
            energy = 0.09;
            spd = 1.11;
            hp = 1;
        }

        void boots() {
            Atk = 1;
            energy = 0.094;
            spd = 2.54;
            hp = 1.144;
        }
        void hat() {
            Atk = 0.096;
            energy = 0.19;
            spd = 0.098;
            hp = 1.011;
        }
    };
}
namespace {
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
}

namespace {
    class Companion : public Pet {
    public:
        void Direwolf() {
            HP = 120;
            energy = 12;
            damage = 10;
            speed = 12;
        }
        void Griffin() {
            HP = 100;
            energy = 10;
            damage = 15;
            speed = 17;
        }
        void Slime() {
            HP = 70;
            energy = 5;
            damage = 7;
            speed = 5;
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
        }
        void Phoenix() {
            HP = 190;
            energy = 30;
            damage = 19;
            speed = 30;
        }
        void MysticHound() {
            HP = 195;
            energy = 25;
            damage = 17;
            speed = 22;
        }
    };
}

void loading() {
    const std::string load ="Loading....\n";
    const std::string greet = "Welcome, ";
    const std::string down = "Master\n";
    for(const char c:load) {
        std::cout << c;
        Sleep(100);
    }
    for(const char c:greet) {
        std::cout << c;
        Sleep(50);
    }
    for(const char c:down) {
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
    std::cout << "1. Sword\n";
    std::cout << "2. Armor\n";
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
};
namespace {
    class Stats {
    public:
        Equipment equipment;
        Companion statCompanion;
        Attacker statAttacker;
        Sword sword;
        Armor armor;
        Accessory accessory;

        double sumHP = 0;
        double sumEnergy = 0;
        double sumDamage = 0;
        double sumSpeed = 0;

        void direWstick(Companion& comp, Sword& sw) {
            comp.Direwolf();
            sw.stick();

            sumHP = comp.HP + sw.hp;
            sumEnergy = comp.energy + sw.energy;
            sumDamage = comp.damage + sw.Atk;
            sumSpeed = comp.speed + sw.spd;
        }

        void companions(Companion& comp) {
            sumHP += comp.HP;
            sumEnergy += comp.energy;
            sumDamage += comp.damage;
            sumSpeed += comp.speed;
        }

        void swords(Sword& sw) {

            sumHP += sw.hp;
            sumEnergy += sw.energy;
            sumDamage += sw.Atk;
            sumSpeed += sw.spd;
        }
        void armors(Armor& ar) {

            sumHP += ar.hp;
            sumEnergy += ar.energy;
            sumDamage += ar.Atk;
            sumSpeed += ar.spd;
        }
    };
}
int main() {
    std::string companion[] = {"1. Direwolf", "2. Griffin", "3. Slime"};
    std::string attacker[] = {"1. Fenrir", "2. Phoenix", "3. Mystic hound"};
    std::string weapon[] = {"stick", "sword", "greatsword"};
    Stats stat = {};
    Companion comp;
    Sword sword;
    Armor armor;
    comp.Direwolf();
    sword.greatsword();
    armor.diamond();
    stat.companions(comp);
    stat.swords(sword);
    stat.armors(armor);
    std::cout << stat.sumDamage;
    return 0;
}

void status(){
    std::cout << "**********Status**********\n";
    std::cout << "Name: Adrian Vance\n";
    std::cout << "Age: 19\n";
    std::cout << "Sex: Male\n";
    std::cout << "Affiliation: Ignis Caleum Guild\n";
    std::cout << "Class: Tamer\n";
}