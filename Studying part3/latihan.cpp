#include <iostream>

int main(){
    std::string beli;
    std::string barang[] = {"chiki", "susu", "roti"};
    int harga[] = {5000, 8000, 6000};
    std::cout << "Mau beli apa mas/mba?\n";
    std::cin >> beli;

    int total = sizeof(barang) / sizeof(barang[0]);
    int mahal = harga[0];
    int murah = harga[0];
    std::string namaMahal = barang[0];
    std::string namaMurah = barang[0];

    for(int i = 0; i < total; i++) {
        if(harga[i] > mahal) {
            mahal = harga[i];
            namaMahal = barang[i];
        }

        if(harga[i] < murah) {
            murah = harga[i];
            namaMurah = barang[i];
        }
    }



    for(int i = 0; i < total; i++) {
        if(beli == barang[i]) {
            std::cout << "Beli " << barang[i] << " ya?\n";
            std::cout << "Harga nya Rp." << harga[i] << " ya mas/mba\n";
            std::cout << "Kalau mba/mas mau beli yang paling mahal, kita ada " << namaMahal << " yang harganya Rp." << mahal << std::endl;
            std::cout << "Tapi kalau yang paling murah juga ada kok, namanya " << namaMurah << " yang harganya Rp." << murah << std::endl;
            return 0;
        }
    }
    std::cout << "maaf mba/mas? barangnya gak ada ya\n";


    return 0;
}