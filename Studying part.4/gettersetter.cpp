#include <iostream>

class portion{
    private:
        int portion = 0;

    public:
        int take;
        void setportion() {
            std::cout << "How much portion of food did you take?: ";
            std::cin >> take;
        }
        void settotal() {
            if(portion > 0 && portion <= 3) {
                std::cout << "Enjoy your food";
            } else if(portion > 3 || portion == 0) {
                std::cout << "No..., you must take between 1-3 portion of this food, so how much did you want?";
            } else {
                std::cout << "What?";
            }
        }
};
int main() {
    //getter = function that make the object attributes readable
    //setter = similiar with getter, but instead readable, setter make the private object attribute writeable
    portion port;

    port.setportion();
    port.settotal();
    
    return 0;
}