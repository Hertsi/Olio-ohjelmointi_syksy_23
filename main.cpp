#include <iostream>
#include <cstdlib>
#include <ctime>


int game(int maxnum) {

    std::srand(static_cast<unsigned>(std::time(nullptr)));


    int etsittavaLuku = std::rand() % maxnum + 1;


    std::cout << "Tervetuloa arvauspeliin! Arvaa luku valilla 1-" << maxnum << "." << std::endl;

    int arvaus;
    int arvaustenMaara = 0;
    bool arvattu = false;

    while (!arvattu) {
        std::cout << "Syota arvauksesi: ";
        std::cin >> arvaus;
        arvaustenMaara++;

        if (arvaus < 1 || arvaus > maxnum) {
            std::cout << "Arvauksen tulee olla valilla 1-" << maxnum << "." << std::endl;
        } else if (arvaus < etsittavaLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (arvaus > etsittavaLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Onneksi olkoon, arvasit oikein! Oikea vastaus oli " << etsittavaLuku << "." << std::endl;
            arvattu = true;
        }
    }

    return arvaustenMaara;
}

int main() {
    int maxnum;
        std::cout << "Syota korkein arvottava numero: ";
        std::cin >> maxnum;

        int arvaustenMaara = game(maxnum);

        std::cout << "Arvausten maara: " << arvaustenMaara << std::endl;

    return 0;
}
