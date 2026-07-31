#include <iostream>

class portion{
    private:
        int portion = 0;

    public:
        int getportion() {
            return portion;
        }

        void setportion(int portion) {
            if(portion <= 0) {
                this->portion = 0;
                std::cout << "you haven't get any portion, here, atleast we can give your food " << portion << "portion";
            }
            else if(portion > 3) {
                this->portion = 3;
                std::cout << "Each person just can have 3 food portion, as for you " << portion << " portion is surely enough!";
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
    return 0;
}