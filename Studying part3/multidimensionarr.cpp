#include <iostream>

int main() {

    std::string food[4][5] = {{"Burito", "Tacos", "Guacamolle"}, 
                            {"Cheesecake", "Apple pie", "Cookies"},
                            {"Nasi Padang", "Nasi Goreng", "Mie ayam"}};
    int row = sizeof(food) / sizeof(food[0]);
    int column = sizeof(food[0]) / sizeof(food[0][0]);

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++){
            std::cout << food[i][j] << " ";
        }
        std::cout << " " << '\n';
    }
    

    return 0;
}