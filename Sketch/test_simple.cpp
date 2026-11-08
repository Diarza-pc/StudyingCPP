#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

void pause(int ms) { std::this_thread::sleep_for(std::chrono::milliseconds(ms)); }

void greet() {
    std::cout << "Welcome! This is a simple Rock-Paper-Scissors game with energy.\n";
}

char getPlayerMove() {
    std::string input;
    while (true) {
        std::cout << "Choose: r (rock), p (paper), s (scissor), d (dodge), q (parry)\n> ";
        std::getline(std::cin, input);
        if (input.size() != 1) { std::cout << "Please enter a single character.\n"; continue; }
        char c = static_cast<char>(std::tolower(static_cast<unsigned char>(input[0])));
        if (c == 'r' || c == 'p' || c == 's' || c == 'd' || c == 'q') return c;
        std::cout << "Invalid choice.\n";
    }
}

char getComputerMove(int Cenergy) {
    int r = std::rand() % 5; // 0..4
    if (r == 3 && Cenergy < 1) r = std::rand() % 3; // avoid dodge if no energy
    if (r == 4 && Cenergy < 2) r = std::rand() % 3; // avoid parry if no energy
    if (r == 0) return 'r';
    if (r == 1) return 'p';
    if (r == 2) return 's';
    if (r == 3) return 'd';
    return 'q';
}

void showStatus(const std::string &name, int pHP, int Penergy, int cHP, int Cenergy) {
    std::cout << "--- STATUS ---\n";
    std::cout << name << "  HP:" << pHP << "  Energy:" << Penergy << "\n";
    std::cout << "CPU   HP:" << cHP << "  Energy:" << Cenergy << "\n";
}

void resolve(char player, char comp, int &pHP, int &Penergy, int &cHP, int &Cenergy) {
    if (player == 'd') {
        if (Penergy < 1) { std::cout << "Not enough energy for dodge.\n"; return; }
        Penergy--;
        int chance = std::rand() % 2;
        if (chance == 0) std::cout << "You dodged!\n"; else { std::cout << "Dodge failed. You take 1 damage.\n"; pHP--; }
        return;
    }
    if (player == 'q') {
        if (Penergy < 2) { std::cout << "Not enough energy for parry.\n"; return; }
        Penergy -= 2;
        std::cout << "You attempted a parry (cost 2 energy).\n";
        return;
    }

    // If player chose r/p/s, handle CPU dodge/parry first
    if (comp == 'd') {
        if (Cenergy < 1) { std::cout << "CPU tried to dodge but had no energy.\n"; } 
        else {
            Cenergy--;
            int chance = std::rand() % 2;
            if (chance == 0) { std::cout << "CPU dodged your attack.\n"; return; }
            else { std::cout << "CPU failed dodge and lost 1 HP.\n"; cHP--; return; }
        }
    }
    if (comp == 'q') {
        if (Cenergy < 2) { std::cout << "CPU tried to parry but had no energy.\n"; } 
        else { Cenergy -= 2; std::cout << "CPU used parry.\n"; return; }
    }

    // Regular RPS resolution
    if (player == comp) { std::cout << "Tie.\n"; }
    else if ((player=='r' && comp=='s') || (player=='p' && comp=='r') || (player=='s' && comp=='p')) {
        std::cout << "You win the round.\n"; cHP--; }
    else { std::cout << "CPU wins the round.\n"; pHP--; }

    if (Penergy < 3) Penergy++;
    if (Cenergy < 3) Cenergy++;
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int pHP = 3, cHP = 3;
    int Penergy = 0, Cenergy = 0;
    std::string name;

    greet();
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    while (pHP > 0 && cHP > 0) {
        showStatus(name, pHP, Penergy, cHP, Cenergy);
        char player = getPlayerMove();
        char comp = getComputerMove(Cenergy);
        std::cout << "CPU chose: " << comp << "\n";
        pause(500);
        resolve(player, comp, pHP, Penergy, cHP, Cenergy);
        pause(500);
    }

    if (pHP <= 0) std::cout << "You lost the game.\n"; else std::cout << "You won the game!\n";
    return 0;
}
