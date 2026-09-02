#include <iostream>
#include <cctype>
#include <windows.h>
#include <limits>
#include <algorithm>

void Load() {
    std::string teks = "Waiting......\n";
    for(char c:teks) {
        std::cout << c;
        Sleep(100);
    }
}
void change(std::string name, double Salary);
void Boss(){
    std::cout << "What did you want to see now? i can help!!\n";
    std::cout << "1. Salary\n";
    std::cout << "2. Money saving\n";
    std::cout << "3. Appointment\n";
}
void Guest() {
    std::cout << "How can i help you today?\n";
    std::cout << "1. Tracking Salary\n";
    std::cout << "2. Tracking work hours\n";
    std::cout << "3. Tracking activity\n";
}
void Salaryb(double Salary);
void money();
std::string appointment();

int main() {
    std::string name;
    double Salary = 0;

    Load();
    std::cout << "For verification, please, enter your name: ";
    std::cin >> name;
    std::transform(name.begin(), name.end(), name.begin(),
        [](unsigned char c) { return std::tolower(c); });
    change(name, Salary);
    
    return 0;
}
void change(std::string name, double Salary) {
    if(name == "diarza") {
        int choice;
        std::cout << "Welcome back, boss!!\n";
        Boss();
        std::cin >> choice;
        if(choice == 1) {
            Salaryb(Salary);
        } else if(choice == 2) {
            money();
        }
    } else {
        std::cout << "Welcome, dear employee\n";
        Guest();
    }
}
void Salaryb(double Salary){
    int choice;
    std::cout << "Uh boss... it looks like your salary kinda..down a bit\n";
    std::cout << "1. What did you mean? tell me\n";
    std::cout << "2. Huh? what the reason?\n";
    std::cin >> choice;
    if(choice == 1) {
        std::cout << "Didn't my salary are $";
        std::cin >> Salary;
            if(Salary >= 1500) {
                std::cout << "Yeah.. but it got decreased because our rival company tactics\n";
                std::cout << "Now your salary is like $" << Salary - (Salary * 0.04) << "/months\n";
                std::cout << "aka got decreased for like " << 100*0.04 << "%";
            } else {
                std::cout << "Eh?? you gotta be kidding boss, your salary is higher than that\n";
            }
    } else if(choice == 2){
       std::cout << "Well... boss already know that we have a rival company rught?\n";
       std::cout << "They launch a new product some months ago, it just.. suddenly booming yesterday\n";
       std::cout << "And  it's affect your salary, made it got decrease " << 100*0.04 << "%" << " from before\n";
    }

}
void money(){
    double saving = 15392.69;
        int choice;
        std::cout << "Welp, you still have big money left boss, precisely $" << saving << '\n';
        std::cout << "Would you like to\n";
        std::cout << "1. Deposit\n";
        std::cout << "2. Withdraw\n";
        std::cin >> choice;

        switch(choice) {
            case 1:
                double depo;
                std::cout << "Enter amount you want to deposit: \n";
                std::cin >> depo;
                if(depo >= 1000) {
                    saving += depo;
                    std::cout << "Whoa, that's sure a lot of money boss!!\n";
                    std::cout << "Your total money now are $" << saving;
                }else if(depo < 0) {
                    std::cout << "you gotta be kidding boss... you know it cant\n";
                } else {
                    saving += depo;
                    std::cout << "Your total money now are $" << saving;
                }
                break;
            case 2:
                double draw;
                std::cout << "Enter amount to withdraw: \n";
                std::cin >> draw;
                if(draw > saving) {
                    std::cout << "Eh... boss... you can't withdraw that much, you currently just have $" << saving << '\n';
                } else if(draw > 1000) {
                    std::cout << "What did you wanna buy boss? that's a lot of money you take\n";
                    saving -= draw;
                    std::cout << "Money left $" << saving;
                } else {
                    saving -= draw;
                    std::cout << "Withdraw successful, money left: $" << saving;
                }
        }
}
std::string appointment() {
    std::string appointment = "-";
    if(appointment == "-"){
        std::cout << "You dont have any appointment today boss\n";
    }
}