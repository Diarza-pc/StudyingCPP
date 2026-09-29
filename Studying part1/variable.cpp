#include <iostream>
int main() {
    //string varieable
    std::string bio = "Biodata";
    std::string name = "John Doe";
    //integer variable
    int age;
    age = 43;
    int weight = 72;
    //float variable
    float height = 1.87;
    //double variable
    double salary = 5000.7136496825846;
    //boolean value
    bool job = true;
    //character variable
    char gender = 'M';
    char result = 'B';

    //output
    std::cout << bio << '\n';
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
    std::cout << "Weight: " << weight << '\n';
    std::cout << "Height: " << height << '\n';
    std::cout << "Salary: " << salary << '\n';
    std::cout << "Job: " << job << '\n';
    std::cout << "Gender: " << gender << '\n';
    std::cout << "Result: " << result << '\n';
    return 0;
}