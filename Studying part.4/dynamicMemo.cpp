#include <iostream>

int main() {
    /*Dynamic memory = memory that got allocated after tge program is akready running and compiled,
                       use new to allocate memory in the heap rather than the stack.
                       Pretty useful when dont know how much exactly data we need from user input.*/
    int size;
    double *grades = 0;

   while(true) {
    std::cout << "How many students' grades are you holding?: ";
    std::cin >> size;

    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(1000, '\n');
        std::cout << "Please, input real number!\n";
    } else if(size < 0) {
        std::cout << "Please, enter positive number!!\n";
    } else {
        break;
    }
   }

    grades = new double[size];

    for(int i = 0; i < size; i++) {
        std::cout << "Students grade #" << i + 1 << ": ";
        std::cin >> grades[i];
    }

    for(int i = 0; i < size; i++) {
        std::cout << "Total: ";
        std::cout << grades[i] << " ";
    }

    delete[] grades;

    return 0;
}