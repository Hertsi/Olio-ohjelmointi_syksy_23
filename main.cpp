#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    //  satunnaislukugeneraattori
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // satunnainen luku välillä 1-20
    int etsittavaLuku = std::rand() % 20 + 1;


    std::cout << "Tervetuloa arvauspeliin! Arvaa luku välillä 1-20." << std::endl;

    int arvaus;
    bool arvattu = false;

    while (!arvattu) {
        std::cout << "Syötä arvauksesi: ";
        std::cin >> arvaus;

        if (arvaus < 1 || arvaus > 20) {
            std::cout << "Arvauksen tulee olla välillä 1-20." << std::endl;
        } else if (arvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (arvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Onneksi olkoon, arvasit oikein! Oikea vastaus oli " << etsittavaLuku << "." << std::endl;
            arvattu = true;
        }
    }

    return 0;
}
