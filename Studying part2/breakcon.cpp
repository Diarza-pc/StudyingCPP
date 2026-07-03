#include <iostream>

int main() {
    //break = break a loop
    //continue = skipping iteration

    for(int i = 1; i <=25; i++) {
        if(i == 6) {
            continue;
        } else if(i == 17) {
            break;
        }
        std::cout << i << std::endl;
    } 


    return 0;
}