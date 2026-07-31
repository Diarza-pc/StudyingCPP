#include <iostream>

int factorial(int num);

int main() {
    //Recursion = A technique that break the complex part into some steps, even though its slower and use more memory.
    std::cout << factorial(30) << '\n';
    return 0;
}
int factorial(int num) {
    if(num <= 1) return 1;
    return num * factorial(num - 1);
}