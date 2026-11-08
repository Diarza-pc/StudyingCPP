#include <iostream>
#include <windows.h>
#include <cctype>
#include <limits>
#include <algorithm>

void load() {
    std::string teks = "Loading...\n";
    for(char c:teks) {
        std::cout << c;
        Sleep(100);
    }
    std::cout << "Tic Tac Toe Beta!!\n";
    std::cout << "The rules were simple, just pick the symbol between X or O\n";
    std::cout << "The one who move first will be decide from coins\n";
    std::cout << "That's all, simple right? enjoy!!\n";
}

void board(const std::string grid[3][3], int rows, int columns) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << " " << '\n';
    }
}

void PlayerChoice(char &choice);
std::string act(std::string move);
void convert(std::string move, int &rows, int &columns);
bool check(std::string grid[3][3], int rows, int columns);
void Replace(std::string grid[3][3], int &rows, int &columns, char choice);

int main() {

    std::string grid[3][3] = {{"A1", "A2", "A3"}, {"B1", "B2", "B3"}, {"C1", "C2", "C3"}};
    int rows;
    int columns;
    std::string place;
    char choice;
    std::string move;
    bool isValid;
    
    load();
    Sleep(3000);
    PlayerChoice(choice);
    system("cls");
        board(grid, 3, 3);
        move = act(move);
        do{
        convert(move, rows, columns);
        if(check(grid, rows, columns)) {
            Replace(grid, rows, columns, choice);
        } else {
            std::cout << "Sorry, this place already taked\n";
        }
    }while(grid[3][3] == "X" && grid[3][3] == "O");

        board(grid, 3, 3);
    return 0;
}

void PlayerChoice(char &choice) {
    std::string teks = "......\n";
    for(char c:teks) {
        std::cout << c;
        Sleep(300);
    }
    std::cout << "Choose one to move (O/X): ";
    std::cin >> choice;
    choice = static_cast<char>(std::toupper(static_cast<unsigned char>(choice)));
}
std::string act(std::string move) {
    std::cout << "Choose coloumns to move: ";
    std::cin >> move;
    std::transform(move.begin(), move.end(), move.begin(),
        [](unsigned char c) { return std::toupper(c); });

    return move;
}
void convert(std::string move, int &rows, int &columns){
    rows = move[0] - 'A';
    columns = move[1] - '1';
}
bool check(std::string grid[3][3], int rows, int columns) {
    if(grid[rows][columns] != "X" && grid[rows][columns] !=  "O") {
        return true;
    } 
    return false;
}
void Replace(std::string grid[3][3], int &rows, int &columns, char choice) {
    grid[rows][columns] = choice;
}