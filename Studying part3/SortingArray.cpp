#include <iostream>

void sort(double array[], int size);
int ask(int input) {
    std::cout << "What did you want to check?" << '\n';
    std::cout << "1. Top 3 in classes" << '\n';
    std::cout << "2. Grade's list" << '\n';
    std::cout << "3. Personal grade" << '\n';
    std::cout << "Enter your choice (in number): " << '\n';
    std::cin >> input;
    return input;
}

int main() {
    std::string Name;
    int input;
    int choice;
    double index;
    std::string name[] = {"Ryan", "Rora", "Lay", "Oures", "Retra", "Prous", "Liad", "Yira"}; 
    double grade[] = {9.79, 9.56, 9.77, 9.56, 9.95, 10.11, 10.24, 10.21};
    int size = sizeof(grade)/sizeof(grade[0]);
    double max1 = grade[0], max2 = grade[0], max3 = grade[0];
    std::string names1 = name[0], names2 = name[0], names3 = name[0];

    for(int i = 1; i < size; i++) {
       if(grade [i] > max1) {
        max3 = max2;
        max2 = max1;
        max1 = grade[i];
        names3 = names2;
        names2 = names1;
        names1 = name[i];
       } else if (grade[i] > max2 && grade[i] != max1) {
        max3 = max2;
        max2 = grade[i];
        names3 = names2;
        names2 = name[i];
       } else if (grade [i] > max3 && grade[i] != max2 && grade[i] != max1) {
        max3 = grade[i];
        names3 = name[i];
       }
    }

    choice = ask(input);
    if(choice == 1) {
        std::cout << names1 << " is in first wank with grade: " << max1 << '\n';
        std::cout << names2 << " is in second wank with grade: " << max2 << '\n';
        std::cout << names3 << " is in third wank with grade: " << max3 << '\n';
    } else if(choice == 2) {
        sort(grade, size);
        for(double grades : grade) {
            std::cout << grades << " ";
        }
    } else if(choice == 3) {
        std::cout << "Enter your name: ";
        std::cin >> Name;
        for(int i = 0; i < size; i++){
            if(Name == name[i]) {
                std::cout << "Name: " << name[i] << '\n';
                std::cout << "Final grade: " << grade[i] << '\n';
            }
        }
    }
   
    
    return 0;
}

void sort(double array[], int size) {
    double check;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j + 1]) {
            check = array[j];
            array[j] = array[j + 1];
            array[j + 1] = check;
            }
        }
    }
}