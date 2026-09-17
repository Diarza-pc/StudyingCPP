#include <algorithm>
#include <iomanip>
#include <iostream>
#include <windows.h>
#include <limits>
#include <cctype>

namespace {
class Equipment {
    public:
    double Atk = 0;
    double energy = 0;
    double spd = 0;
    double hp = 0;
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
            Atk = 1.24;
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
        double HP = 0;
        double energy = 0;
        double damage = 0;
        double speed = 0;
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

struct tool{
    int choice;
    int choose;
    bool validation;
    std::string ch1;
    std::string ch2;
    std::string ch3;
};
void action(tool& tools) {
    std::cout << "Select one companion to check it status: ";
    std::cin >> tools.choose;
}
namespace {
    class Stats {
    public:
        double sumHP = 0;
        double sumEnergy = 0;
        double sumDamage = 0;
        double sumSpeed = 0;

        void companions(Companion& comp) {
            sumHP += comp.HP;
            sumEnergy += comp.energy;
            sumDamage += comp.damage;
            sumSpeed += comp.speed;
        }
        void attacker(Attacker& attk) {
            sumHP += attk.HP;
            sumEnergy += attk.energy;
            sumDamage += attk.damage;
            sumSpeed += attk.speed;
        }
        void calc(Sword& sw, Armor& ar, Accessory& ac, std::string swordEquip, std::string armorEquip, std::string accessoryEquip) {
            std::cout << "====================DISPLAY====================\n";
            std::string swords[] = {"1. Stick", "2. Sword", "3. Greatsword"};
            std::string armors[] = {"1. Chain", "2. Iron", "3. Diamond"};
            std::string accessorys[] = {"1. Necklace", "2. Boots", "3. Hat"};

            std::cout << std::left << std::setw(20) << "==Sword==" << std::setw(20) <<  "==Armor==" << "==Accessory==" << '\n';

            for (int i = 0; i < 3; i++) {
                std::cout << std::left << std::setw(20) << swords[i] << std::setw(20) << armors[i] << accessorys[i] << '\n';
            }
            std::cout << "=======================================\n";
            std::cout << "Sword section: ";
            std::cin >> swordEquip;
            std::transform(swordEquip.begin(), swordEquip.end(), swordEquip.begin(), ::tolower);
            std::cout << "Armor section: ";
            std::cin >> armorEquip;
            std::transform(armorEquip.begin(), armorEquip.end(), armorEquip.begin(), ::tolower);
            std::cout << "Accessory section: ";
            std::cin >> accessoryEquip;
            std::transform(accessoryEquip.begin(), accessoryEquip.end(), accessoryEquip.begin(), ::tolower);

            if (swordEquip == "stick") sw.stick();
            else if (swordEquip == "sword") sw.sword();
            else if (swordEquip == "greatsword") sw.greatsword();
            else if (swordEquip == "none"){}
            else std::cout << "We can't find that kind of sword\n";

            if (armorEquip == "chain") ar.chain();
            else if (armorEquip == "iron") ar.iron();
            else if (armorEquip == "diamond") ar.diamond();
            else if (armorEquip == "none"){}
            else std::cout << "We can't find that kind of armor\n";

            if (accessoryEquip == "necklace") ac.necklace();
            else if (accessoryEquip == "boots") ac.boots();
            else if (accessoryEquip == "hat") ac.hat();
            else if (accessoryEquip == "none"){}
            else std::cout << "We can't find that kind of sword\n";

            sumHP += (sw.hp + ar.hp) * ac.hp;
            sumEnergy += (sw.energy + ar.energy) * ac.energy;
            sumDamage += (sw.Atk + ar.Atk) * ac.Atk;
            sumSpeed += (sw.spd + ar.spd) * ac.spd;
        }

    };
}
namespace {
    class statTemplate : public Stats{
    public:
        void direwolfTemplate(Stats& s) {
            std::cout << "Species: Direwolf\n";
            std::cout << "HP: " << s.sumHP << '\n';
            std::cout << "Energy: " << s.sumEnergy << '\n';
            std::cout << "Damage: " << s.sumDamage << '\n';
            std::cout << "Speed: " << s.sumSpeed << '\n';
        }
        void griffinTemplate(Stats& s) {
            std::cout << "Species: Griffin\n";
            std::cout << "HP: " << s.sumHP << '\n';
            std::cout << "Energy: " << s.sumEnergy << '\n';
            std::cout << "Damage: " << s.sumDamage << '\n';
            std::cout << "Speed: " << s.sumSpeed << '\n';
        }
        void slimeTemplate(Stats& s) {
            std::cout << "Species: Slime\n";
            std::cout << "HP: " << s.sumHP << '\n';
            std::cout << "Energy: " << s.sumEnergy << '\n';
            std::cout << "Damage: " << s.sumDamage << '\n';
            std::cout << "Speed: " << s.sumSpeed << '\n';
        }
        void fenrirTemplate(Stats& s) {
            std::cout << "Species: Fenrir\n";
            std::cout << "HP: " << s.sumHP << '\n';
            std::cout << "Energy: " << s.sumEnergy << '\n';
            std::cout << "Damage: " << s.sumDamage << '\n';
            std::cout << "Speed: " << s.sumSpeed << '\n';
        }
        void phoenixTemplate(Stats& s) {
            std::cout << "Species: Phoenix\n";
            std::cout << "HP: " << s.sumHP << '\n';
            std::cout << "Energy: " << s.sumEnergy << '\n';
            std::cout << "Damage: " << s.sumDamage << '\n';
            std::cout << "Speed: " << s.sumSpeed << '\n';
        }
        void mystichoundTemplate(Stats& s) {
            std::cout << "Species: Mystic Hound\n";
            std::cout << "HP: " << s.sumHP << '\n';
            std::cout << "Energy: " << s.sumEnergy << '\n';
            std::cout << "Damage: " << s.sumDamage << '\n';
            std::cout << "Speed: " << s.sumSpeed << '\n';
        }
    };
}

int main() {
    std::string companion[] = {"1. Direwolf", "2. Griffin", "3. Slime"};
    std::string attacker[] = {"1. Fenrir", "2. Phoenix", "3. Mystic hound"};
    std::string weapon[] = {"stick", "sword", "greatsword"};
    Stats stat = {};
    Companion comps;
    Attacker attack;
    Sword sword;
    Armor armor;
    Accessory accessory;
    tool tool;
    statTemplate Template;

    loading();
    do {
        ch();
        std::cin >> tool.choice;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice!!!, input number between 1-5!!\n";
        }
    switch (tool.choice) {
        case 1:
            status();
            break;
        case 2:
            comp(companion, 3);
            while (true) {
                action(tool);
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid choice!!\n";
                }else if (tool.choose > 0 && tool.choose < 4) {
                    tool.validation = true;
                } else {
                    std::cout << "Invalid number!!\n";
                }
                if (tool.validation == true) {
                    break;
                }
            }
            if (tool.choose == 1) {
                comps.Direwolf();
                stat.companions(comps);
                Template.direwolfTemplate(stat);
                stat.calc(sword, armor, accessory, tool.ch1, tool.ch2,tool.ch3);
                Template.direwolfTemplate(stat);
            } else if (tool.choose == 2) {
                comps.Griffin();
                stat.companions(comps);
                Template.griffinTemplate(stat);
                stat.calc(sword, armor, accessory, tool.ch1, tool.ch2,tool.ch3);
                Template.griffinTemplate(stat);
            }else if (tool.choose == 3) {
                comps.Slime();
                stat.companions(comps);
                Template.slimeTemplate(stat);
                stat.calc(sword, armor, accessory, tool.ch1, tool.ch2,tool.ch3);
                Template.slimeTemplate(stat);
            }
            break;
        case 3:
            ::attk(attacker, 3);
            while (true) {
                action(tool);
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid choice!!\n";
                }else if (tool.choose > 0 && tool.choose < 4) {
                    tool.validation = true;
                } else {
                    std::cout << "Invalid number!!\n";
                }
                if (tool.validation == true) {
                    break;
                }
            }
            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid choice!!\n";
                continue;
            }
            if (tool.choose == 1) {
                attack.Fenrir();
                stat.attacker(attack);
                Template.fenrirTemplate(stat);
                stat.calc(sword, armor, accessory, tool.ch1, tool.ch2,tool.ch3);
                Template.fenrirTemplate(stat);
            } else if (tool.choose == 2) {
                attack.Phoenix();
                stat.attacker(attack);
                Template.phoenixTemplate(stat);
                stat.calc(sword, armor, accessory, tool.ch1, tool.ch2,tool.ch3);
                Template.phoenixTemplate(stat);
            } else if (tool.choose == 3) {
                attack.MysticHound();
                stat.attacker(attack);
                Template.mystichoundTemplate(stat);
                stat.calc(sword, armor, accessory, tool.ch1, tool.ch2,tool.ch3);
                Template.mystichoundTemplate(stat);
            }
            break;
        default:
            std::cout << "ERROR\n";
            break;
    }
    }while (tool.choice < 1 || tool.choice > 5);

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