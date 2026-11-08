#include <iostream>
#include <ctime>

void arena(char board[]);
char mark(char &choice);
void playerChoice(char board[], int &move);
void computerChoice(char board[], char &choice, char &choices);
void replace(char board[], int &move, char &choice);
void computerAct(char board[], int &moved);
void replaceC(char board[], char &choices, int &moved);

int main() {
    char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int move = 0;
    int moved = 0;
    char choice;
    char choices;
    bool run = true;
    

    mark(choice);
    while(run) {
    arena(board);
    playerChoice(board, move);
    computerChoice(board, choice, choices);
    replace(board, move, choice);
    computerAct(board, moved);
    replaceC(board, choices, moved);
    }
    return 0;
}
void arena(char board[]) {
   std::cout << "     " << "|" << "     " << "|" << "     " << "|" << '\n';
   std::cout << "  " << board[0] << "  " << "|" << "  " << board[1] << "  " << "|" << "  " << board[2] << "  " << "|" << '\n';
   std::cout << "     " << "|" << "     " << "|" << "     " << "|" << '\n';
   std::cout << "------------------------" << '\n';
   std::cout << "     " << "|" << "     " << "|" << "     " << "|" << '\n';
   std::cout << "  " << board[3] << "  " << "|" << "  " << board[4] << "  " << "|" << "  " << board[5] << "  " << "|" << '\n';
   std::cout << "     " << "|" << "     " << "|" << "     " << "|" << '\n';
   std::cout << "------------------------" << '\n';
   std::cout << "     " << "|" << "     " << "|" << "     " << "|" << '\n';
   std::cout << "  " << board[6] << "  " << "|" << "  " << board[7] << "  " << "|" << "  " << board[8] << "  " << "|" << '\n';
   std::cout << "     " << "|" << "     " << "|" << "     " << "|" << '\n';
}
char mark(char &choice) {
    std::cout << "Choose a mark (X/O): ";
    std::cin >> choice;
    choice = toupper(choice);
    return choice;
}
void playerChoice(char board[], int &move) {
    std::cout << "Enter spot you want to choose (1-9): ";
    std::cin >> move;

    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Invalid input!\n";
    }

    if(!move > 0 || !move <= 9) {
        std::cout << "Please, enter number between 1-9\n";
    }
}
void computerChoice(char board[], char &choice, char &choices){
    if(choice == 'X') {
        choices = 'O';
    } else if(choice == 'O') {
        choices = 'X';
    }
}
void replace(char board[], int &move, char &choice) {
    int indexP = move - 1;
    if(board[indexP] != 'X' && board[indexP] != 'O') {
        board[indexP] = choice;
    } else if(board[indexP] == 'X' || board[indexP] == 'O') {
        std::cout << "This spot already taken!! choose different spot instead!\n";
    }
}
void computerAct(char board[], int &moved){
    srand(time(NULL));
    moved = rand() % 10;
}
void replaceC(char board[], char &choices, int &moved) {
    int indexC = moved - 1;

    if(board[indexC] != 'X' && board[indexC] != 'O') {
        board[indexC] = choices;
    } else if(board[indexC] == 'X' || board[indexC] == 'O') {
        std::cout << "This spot already taken!! choose different spot instead!\n";
    }
}

