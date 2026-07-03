#include <iostream>

using namespace std;

int main() {

    //switch is alternative ways to many if else statement, but it only works with integer and char data type, not string.

    //example with if else statement
    char grade;
    cout << "What did you get in the test yesterday?" << '\n';
    cin >> grade;
    if (grade == 'A' || grade == 'a') {
        cout << "Woah, you did really well, mate!!" << '\n';    
    } else if (grade == 'B' || grade == 'b') {
        cout << "Not bad, you did good!!" << '\n';
    } else if (grade == 'C' || grade == 'c') {
        cout << "Well, you can do better than that, but its okay!!" << '\n';
    } else if (grade == 'D' || grade == 'd') {
        cout << "Hmm, you need to work harder, but its not the end of the world!!" << '\n';
    } else if (grade == 'F' || grade == 'f') {
        cout << "Oh no, you need to work really hard, but its not the end of the world!!" << '\n';
    } else {
        cout << "Huh? can you just tell A-F?" << '\n';
    }
    
    cout << "Okay uh... how about the science exam?" << '\n';
    //example with switch statement
    int grade2;
    cout << "What did you get?" << '\n';
    cin >> grade2;
    switch (grade2) {
        case 100:
          cout << "Sheesh, that's my mate" << '\n';
          break;
        case 90:
          cout << "Well, still higher than mine" << '\n';
          break;
        case 80:
          cout << "Not that bad i guess" << '\n';
          break;
        case 70:
          cout << "Well. you can do better next time" << '\n';
          break;
        case 60:
          cout << "You okay?" << '\n';
          break;
        default:
          cout << "Uh.. you need to rest" << '\n';
          break;
    }

    return 0;
}