#include <iostream>
#include <cstdlib>
#include <ctime>


void suoritaArvauspeli() {

    std::srand(static_cast<unsigned>(std::time(nullptr)));


    int etsittavaLuku = std::rand() % 20 + 1;

    // Aloita peli
    std::cout << "Tervetuloa arvauspeliin! Arvaa luku valilla 1-20." << std::endl;

    int arvaus;
    bool arvattu = false;

    while (!arvattu) {
        std::cout << "Syota arvauksesi: ";
        std::cin >> arvaus;

        if (arvaus < 1 || arvaus > 20) {
            std::cout << "Arvauksen tulee olla valilla 1-20." << std::endl;
        } else if (arvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (arvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Onneksi olkoon, arvasit oikein! Oikea vastaus oli " << etsittavaLuku << "." << std::endl;
            arvattu = true;
        }
    }
}

int main() {
    suoritaArvauspeli();

    return 0;
}

