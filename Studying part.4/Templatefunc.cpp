#include <iostream>
template <typename B, typename S>
auto comparing(B thing1, S thing2) {
    return (thing1 < thing2) ? thing2 : thing1;
}

int main() {

    std::cout << comparing(9, 3);
    
    return 0;
}