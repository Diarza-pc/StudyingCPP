#include <iostream>
#include <iomanip>
#include <limits>

int Subject(std::string subject[]);
void Biology(std::string bioSubject[], double bioScore[], int size);
void subAss();

int main() {
    int size, total = 0;
    int move;
    std::string subject[6] = {"1. Biology", "2. Chemistry", "3. Math", "4. Physics", "5. Geography", "6. Informatics"};
    std::string bioSubject[4] = {"Genetics", "Ecology", "Microbiology", "Botany"};
    double bioScore[size];
    
    size = sizeof(bioScore) / sizeof(bioScore[0]);


    move = Subject(subject);
    switch(move) {
        case 1:
            Biology(bioSubject, bioScore, size);
            break;
    }

    return 0;
}
int Subject(std::string subject[]){
    int choice;
    std::cout << "*****Subject*****" << '\n';
    for(int i = 0; i < 6; i++) {
        std::cout << subject[i] << '\n';
    }
    while(true) {
    std::cout << "Please enter the subject you currently taking: ";
    std::cin >> choice;
    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Please, use number between 1-6\n";
    } else {
        break;
    }
}
    return choice;
}
void Biology(std::string bioSubject[], double bioScore[], int size){
    int bioSub;
    bool found, found1;
    std::string submit, submit1, submit2, submit3;

    std::cout << "There's few appointment in biology, enter how much you already submitted: ";
    std::cin >> bioSub;
    if(std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "That isn't what i mean\n";
    }
    switch(bioSub) {
        case 1:
            std::cout << "There are 4 assignment in total, you just submitted 1\n";
            for(int i = 0; i < 4; i++) {
                std::cout << bioSubject[i] << "/";
            }
            std::cout << '\n';
            while(true){
                std::cout << "Which one did you submit?: ";
                std::cin >> submit;
                for(int i = 0; i < 4; i++) {
                    if(submit == bioSubject[i]) {
                        found = true;
                        break;
                    }
                }
                if(found == true) {
                    break;
                } else {
                    std::cout << "That's not what i mean\n";
                    std::cout << "Remember, there are just 4 assignment: " << bioSubject[0] << " or " << bioSubject [1] << " or " << bioSubject[2] << " or " << bioSubject[3] << '\n';
                }
            }
            for(int i = 0; i < size; i++) {
                std::cout << "Enter your assignment score: ";
                std::cin >> bioScore[i];
            }
            for(int i = 0; i < size; i++) {
                std::cout << "Your " << submit << " Score was: ";
                std::cout << bioScore[i];
            }
        break;
        case 2:
            
            std::cout << "There are 4 assignment in total, you just submitted 2\n";
            
            while(true) {
            std::cout << "Enter first assignment: ";
            std::cin >> submit;
            std::cout << "Enter second assignment: ";
            std::cin >> submit1;

            for(int i = 0; i < 4; i++) {
               if(submit == bioSubject[i]) found = true;
               if(submit1 == bioSubject[i]) found1 = true;
            }
            if(found == true && found1 == true) {
                break;
            } else if(found == true || found1 == true) {
                std::cout << "You just submit one assignment, submit another one again!\n";
            } else {
                std::cout << "Seriously?\n";
            }
            }
                std::cout << "Enter your " << submit << " score: ";
                std::cin >> bioScore[0];
                std::cout << "Enter your " << submit1 << " score: ";
                std::cin >> bioScore[1];

                std::cout << "Your " << submit << " score are: " << bioScore[0] << '\n';
                std::cout << "Your " << submit1 << " score are: " << bioScore[1];
        break;
        case 3:
            std::cout << "There are 4 assignment in total, you just submitted 2\n";
            for(int i =0; i < 3; i++) {
                std::cout << "Enter your #" << i + 1 << " assignment: ";
                std::cin >> submit;
            }
        break;
    }
}