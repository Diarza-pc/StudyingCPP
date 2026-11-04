#include <iostream>
#include <vector>
#include <cctype>
namespace {
    void nameInsertion(std::vector<std::string>& names, std::string name) {
        if (names.empty()) {
            std::cout << "There are no names here, input a name first, including your name (type 'exit' to leave).\n";
            while (name != "exit") {
                std::cout << "Enter name: ";
                std::getline(std::cin, name);

                names.push_back(name);
            }
            names.pop_back();
        }
    }
    std::vector <int> display(const std::vector<std::string>& names) {
        std::vector<int> indices;
        for (int i = 0; i < names.size(); i++) {
            if (std::islower(static_cast<unsigned char>(names[i][0]))) {
                indices.push_back(i);
            }
        }
        return indices;
    }
    struct component {
        std::string name;
        std::vector<std::string> names;
        std::vector<int> indices;
    };
}

int main() {
    component c;
    nameInsertion(c.names, c.name);
    c.indices = display(c.names);

    display(c.names);
    if (c.indices.empty()) {
        std::cout << "All world are start with capital!!\n";
    } else {
        std::cout << "The first word at the following indices AREN'T capital!!\n";
        for (const int idx : c.indices) {
            std::cout << "Index : " << idx << "/ " << c.names[idx] << '\n';
        }
    }
    return 0;
}