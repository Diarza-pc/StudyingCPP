#include <iostream>
#include <iomanip>
#include <limits>

void saving(double money);
double deposit();
double withdraw(double money);

using namespace std;
int main(){ 
    double money = 0;
    int choice;
 do{
    cout << "**********Your personal Saving**********\n";
    cout << "----------------------------------------\n";
    saving(money);
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Leave\n";
    cin >> choice;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        choice = 0;
    }

    switch(choice) {
        case 1: 
           money += deposit();
           break;
        case 2:
           money -= withdraw(money);
           break;
        case 3:
           cout <<  "Thank you for your visit\n";
           break;
        default:
           cout << "Invalid choice\n";
           break;
    }
}while(choice !=3);
    
    return 0;
}

void saving(double money) {
    std::cout << "Money left: $" << money << setprecision(2) << fixed << '\n';
}

double deposit() {
    double amount;
    cout << "Enter amount you want to deposit: \n";
    cin >> amount;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number.\n";
        return 0;
    }
    if(amount < 0) {
        cout << "Invalid number\n";
        return 0;
    } else{
        return amount;
    }
}

double withdraw(double money) {
    double draw;
    cout << "Enter amount of money you want to take\n";
    cin >> draw;
    if(cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input. Please enter a number.\n";
        return 0;
    }
    if(draw < 0) {
        cout << "Insufficient funds\n";
        return 0;
    } else if(draw > money) {
        cout << "You can't withdraw your money\n";
        return 0;
    }else if (draw < 0) {
        cout << "Tha's not valid amount\n";
        return 0;
    }else {
        return draw;
    }
}