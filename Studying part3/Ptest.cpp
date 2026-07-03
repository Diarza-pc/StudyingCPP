#include <iostream>

int question(int ans) {
    std::cout << "Bre, itu buku yang lu taruh di rak gue yang di samping kasur, rak ketiga, buku apaan?\n";
    std::cout << "1. Novel\n";
    std::cout << "2. Kamus\n";
    std::cout << "3. Manga\n";
    std::cout << "4. Ensiklopedia\n";
    std::cin >> ans;
    return ans;
}
int main() {
 
    std::string book = "Novel";
    int ans;
    int answer;

    answer = question(ans);
    if (answer == 1) {
        std::string* manga = &book;
        *manga = "Manga";
        std::cout << "Lah, bukannya udah gue kasih tanda ya? Novel tuh di rak kedua\n";
        std::cout << "Naik lagi ke kamar gue, terus ganti tu novel sama " << book << ", gue gak mau tau\n";

    } else if (answer == 2) {
        std::string * kamus = &book;
        *kamus = "Kamus";
        std::cout << "Hah? bukannya gue udah tandain kalau novel tuh lu taruh di rak " << kamus << "?\n";
        std::cout << "Duh, yaudah deh, nanti gue pindahin, harusnya tu rak diisi " << book << " gue\n";
    } else if(answer == 3) {
        std::string *manga = &book;
        std::cout << "Oh, di rak " << manga << "?, oke deh, thank you yaw\n";
    } else if(answer == 4) {
        std::string* ensiklopedia = &book;
        std::cout << "Njir, bisa roboh rak gue, berat coy ensi, lu tuh harusnya taruh di box " << ensiklopedia << " aja, yang di samping meja gue tuh, nanti pindahin ya\n"; 
    } else {
        std::cout << "Lu ngeracau apaan?\n";
    }


    return 0;
}