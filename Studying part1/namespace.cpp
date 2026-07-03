#include <iostream>

namespace another {
    int x = 756;
}
namespace others {
    int x = 75;
}
namespace another_way {
    float c = 4.738; // you can also use another data type.
}

int main () {
    //so basically, namespace is a way to give our variables, functions, and classes a unique name to avoid naming conflicts with other parts of the code. It allows us to organize our code into logical groups and prevent naming collisions when we have multiple libraries or modules in our program.
    //you could say like... variables x can have multple value if using namespace.

    using namespace another_way; //use this and you dont need to write the prefix.
    using namespace std; //it means that you dont need to write std:: before cout and endl.

    int x;
    x = 34;
    cout << "The value of x is: " << x << '\n'; //like you can see, this value of x is 34, according to the code.
    cout << "The value of x in the 'another' namespace is: " << another::x << '\n'; //as you can see, it was x variable too but have different value.
    cout << "The value of x in the 'others' namespace is: " << others::x << '\n'; //as you can see, it was x variable too but have different value.
    cout << "The value of c is: " << c << '\n'; //as you can see, it was c variable too but have different value.
    return 0;
}