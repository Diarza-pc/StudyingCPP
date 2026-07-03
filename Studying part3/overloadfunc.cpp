#include <iostream>

void book(){
    std::cout << "you borrow a book" << std::endl;
}
void book(int all) {
    std::cout << "you borrow " << all << " book" << '\n';
}
void book (int all, std::string genre) {
    std::cout << "you borrow " << all << " " << genre << " book\n";
}

int main() {
    //overload func is basically just bunch of void who have same variable name but different parameters.
    book(3, "Fantasy");
    return 0;
}