#include <iostream>

int main() {
    //do while loop = do some block of code first, then repeat it if the condition were TRUE

    int num;

    do {
        std::cout << "Please enter positif number: " << std::endl;
        std::cin >> num;
    } while (num < 0);

    std::cout << "The number you choose is: " << num << std::endl;
 

    std::string play;

    do {
        std::cout << "Want to play a game (yes/no/stop)?" << std::endl;
        std::cin >> play;
        if(play == "Yes" || play == "yes") {
            std::cout << "Alright, shall we go to another round now?" << std::endl;
        } else if (play == "No" || play == "no") {
            std::cout << "Ah cmon, just one round again please?" << std::endl;
        }
    } while(play == "Yes" || play == "yes" || play == "No" || play == "no");
    
    std::cout << "Alright alright, i won't force you" << std::endl;

    return 0;
}