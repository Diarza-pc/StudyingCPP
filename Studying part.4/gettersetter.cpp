#include <iostream>

class portion{
    private:
        int portion = 0;

    public:
        int getportion() {
            std::cout << "You didn't take any food?\n";
            return portion;
        }
        void setportion(int portion) {
            if(portion <= 0) {
                this->portion = portion;
                std::cout << "Why didn't take your food?\n";
                portion = 1;
                std::cout << "Here, " << portion << " portion should be enough";
            }
            else if(portion > 3) {
                this->portion = portion;
                std::cout << portion << " portion!!??" << "No way, each person just can have 3 portion\n";
                portion = 3;
                std::cout << "So, " << portion << " should be enough for you";
            }
            else {
                this-> portion = portion;
                std::cout << "Enjoy!";
            }
        }
};
int main() {
    //getter = function that make the object attributes readable
    //setter = similiar with getter, but instead readable, setter make the private object attribute writeable
    portion port;
    port.getportion();
    port.setportion(9);
    return 0;
}