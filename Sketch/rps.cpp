#include <iostream>
#include <windows.h>
#include <ctime>
#include <cctype>

void Greet() {
    std::cout << "Welcome dear guest\n";
    std::cout << "Thank you for visiting this game\n";
}
void simpleintro() {
    std::cout << "-------------------------------------------------------------------------------------\n";
    std::cout << "So basically, this game have 2 player, you and computer\n";
    std::cout << "The difference is, this game have energy feature\n";
    std::cout << "what is energy feature? you will be given 3 energy that can be used for parry damage\n";
    std::cout << "You can dodge too, but it will be 50/50, it mean you will be fail or success to dodge\n";
    std::cout << "The parry needs 2 energy, while dodge need 1 energy. goodluck player\n";
    std::cout << "-------------------------------------------------------------------------------------\n";
}
void prof(int pHP, int Penergy, int cHP, int Cenergy, std::string name);
void waiting() {
    std::cout << "Waiting opponent to move";
    std::string dot = ".....\n";
    for(char c:dot) {
        std::cout << c;
        Sleep(100);
    }
}
char set();
void act(char moving, int &pHP, int &Penergy, int &cHP, int &Cenergy);

int main(){
    int acc;
    char decision;
    char moving;
    int pHP = 3;
    int Penergy = 0;
    int cHP = 3;
    int Cenergy = 0;
    std::string name;

    std::string teks = "Loading.....\n";
    for(char c:teks) {
        std::cout << c;
        Sleep(100);
    }
    Greet();
    simpleintro();
    std::cout << "Enter your name: " << std::endl;
    std::getline(std::cin, name);
    do{
        system("cls");
    prof(pHP, Penergy, cHP, Cenergy, name);
    std::cout << "----------\n";
    moving = set();
    act(moving, pHP, Penergy, cHP, Cenergy);
    Sleep(1000);
    }while(pHP > 0 && cHP > 0);


    return 0;
}

void prof(int pHP, int Penergy, int cHP, int Cenergy, std::string name){
    std::cout << "--------------------\n";
    std::cout << "Player: " << name << std::endl;
    std::cout << "Health bar: " << pHP << std::endl;
    std::cout << "Energy: " << Penergy << std::endl;
    std::cout << "--------------------\n";
    std::cout << "Computer " << std::endl;
    std::cout << "Health bar: " << cHP << std::endl;
    std::cout << "Energy: " << Cenergy << std::endl;
    std::cout << "--------------------\n";
    
}

char set() {
    char dc;
    std::cout << "**********Make a move**********\n";
    std::cout << "r = Rock\n";
    std::cout << "p = Paper\n";
    std::cout << "s = Scissor\n";
    std::cout << "d = dodge\n";
    std::cout << "q = parry\n";
    std::cin >> dc;
    return dc;
}
void act(char moving, int &pHP, int &Penergy, int &cHP, int &Cenergy) {
    moving = std::tolower(moving);

    if (moving == 'd') {
        if (Penergy >= 1) {
            srand(time(NULL));
            int chance = rand() % 2 + 1;
            switch(chance) {
                case 1:
                   Penergy--;
                   std::cout << "Player succesfully use dodge!!\n";
                   break;
                case 2:
                   std::cout << "Player failed use dodge!!\n";
                   pHP--;
                   break;
            }
        } else {
            std::cout << "Lack of energy!!!\n";
        }
        return;
    }

    if(moving == 'q') {
        if(Penergy >= 2) {
            Penergy -= 2;
            std::cout << "Player use parry!!!\n";
        } else {
            std::cout << "lack of energy!!\n";
        }
        return;
    }

    if(moving == 'r') {
        std::cout << "You choose rock!\n";
    } else if (moving == 'p') {
        std::cout << "You choose paper!\n";
    } else if (moving == 's') {
        std::cout << "You choose scissor!\n";
    } else {
        std::cout << "Invalid choice. Please enter r, p, or s.\n";
        return;
    }

    waiting();

    srand(time(NULL));
    int act = rand() % 5 + 1;
    switch(act) {
        case 1:
           std::cout << "Computer choose rock!!\n";
           break;
        case 2:
           std::cout << "Computer choose paper!!\n";
           break;
        case 3:
           std::cout << "Computer choose scissor!!\n";
           break;
        case 4:
           std::cout << "Computer use Parry ability!!\n";
           break;
        case 5:
           std::cout << "Computer use dodge ability!!\n";
           break;
    }

    char Compchoice;
    if(act == 1) Compchoice = 'r';
    else if(act == 2) Compchoice = 'p';
    else if(act == 3) Compchoice = 's';
    else if(act == 4) Compchoice = 'q';
    else Compchoice = 'd';

    if (Compchoice == 'd') {
        if (Cenergy >= 1) {
            srand(time(NULL));
            int chance = rand() % 2 + 1;
            switch(chance) {
                case 1:
                   Cenergy--;
                   std::cout << "Computer succesfully use dodge!!\n";
                   break;
                case 2:
                   std::cout << "Computer failed use dodge!!\n";
                   cHP--;
                   break;
            }
        } else {
            std::cout << "Lack of energy!!!\n";
        }
        return;
    }

    if(Compchoice == 'q') {
        if(Cenergy >= 2) {
            Cenergy -= 2;
            std::cout << "Computer use parry!!!\n";
        } else {
            std::cout << "lack of energy!!\n";
        }
        return;
    }

    std::string teks = "Calculating..\n";
    for(char c:teks) {
        std::cout << c;
        Sleep(50);
    }

    if((moving == 'r') && (Compchoice == 'r')) {
        std::cout << "Tie!\n";
    }else if ((moving== 'r') && (Compchoice == 'p')) {
        std::cout << "Computer win!\n";
        pHP--;
    }else if ((moving == 'r') && (Compchoice == 's')) {
        std::cout << "Player win!\n";
        cHP--;
    }else if ((moving == 'p') && (Compchoice == 'r') ) {
        std::cout << "Player win!\n";
        cHP--;
    }else if ((moving== 'p') && (Compchoice == 'p')) {
        std::cout << "Tie!\n";
    }else if ((moving == 'p') && (Compchoice == 's')) {
        std::cout << "Computer win!\n";
        pHP--;
    }else if ((moving == 's') && (Compchoice == 'r')) {
        std::cout << "Computer win!\n";
        pHP--;
    }else if ((moving == 's') && (Compchoice == 'p')) {
        std::cout << "Player win!\n";
        cHP--;
    }else if ((moving == 's') && (Compchoice == 's')) {
        std::cout << "Tie!\n";
    }

    if (Penergy < 3) {
        Penergy++;
    }

    if (Penergy == 3) {
        Penergy = 3;
    }

    if (Cenergy < 3) {
        Cenergy++;
    }

    if (Cenergy == 3) {
        Cenergy = 3;
    }
}